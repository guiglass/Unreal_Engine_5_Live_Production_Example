//Copyright Animation Prep Studios 2021 - all rights reserved.

#pragma once

#include "CoreMinimal.h"

#include <queue>

#include "Networking.h"
#include "Animation/AnimNodeBase.h"
#include "Http.h"
#include "APSMocapServerSync.generated.h"


class UAPSMocapServerSync;
// The APS motion capture data sync module.
static UAPSMocapServerSync* APSData;

UENUM()
enum BoneGroup
{
	none,
	neck,
	spine,
	legs,
	clavicles,
	arms,
	hands,
	fingers,
};

USTRUCT()
struct FAvatarBone
{
	GENERATED_BODY()
	
	UPROPERTY()
	FString name; //JSON Var
	
	UPROPERTY()
	int startIdxPosition = -1;
	
	UPROPERTY()
	FVector currentPosePosition;
		
	UPROPERTY()
	int hasPosition; //JSON Var
	
	UPROPERTY()
	FVector iPosition; //JSON Var
	
	UPROPERTY()
	FVector deltPosition;
	
	UPROPERTY()
	int startIdxRotation = -1;

	UPROPERTY()
	FQuat currentPoseRotation;
	
	UPROPERTY()
	int hasRotation; //JSON Var
	
	UPROPERTY()
	FQuat iRotation; //JSON Var

	UPROPERTY()
	FQuat deltRotation;
	
	UPROPERTY()
	TEnumAsByte<BoneGroup> boneGroup; //JSON Var
};

USTRUCT()
struct FAvatarData
{
	GENERATED_BODY()

	UPROPERTY()
	float hip_height; //JSON Var

	UPROPERTY()
	float arm_scale; //JSON Var
	
	UPROPERTY()
	float arm_scale_initial = 1;
	
	UPROPERTY()
	float hip_scale = 1;

	UPROPERTY()
	UAnimInstance* aInstance; //the animations instance for setting the blendshapes
	
	UPROPERTY()
	int32  blendshapes; //JSON Var

	UPROPERTY()
	TArray<FName> blendshapeNames; //JSON Var

	UPROPERTY()
	int32  buffer; //JSON Var

	UPROPERTY()
	TArray<FAvatarBone> bones; //JSON Var

	UPROPERTY()
	int scaleStartIdx = -1;
	
	UPROPERTY()
	int blendshapStartIdx = -1;	
};

struct QueueItem
{
	int size = -1; //the length of the floatData array
	float* floatData; //the socket data from APS converted to floats array
};

//map from APS armature indexes to Unreal reference pose indexes
struct ArmaturePoseMap
{
	int armatureBone = -1; //APS armature json data indexes
	int poseBone = -1;	//Unreal ref pose indexes 
};

static bool canSendSocket = false;
	
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class APSLIVELINK_API UAPSMocapServerSync : public UActorComponent
{
	GENERATED_BODY()

public:
	UAPSMocapServerSync(const FObjectInitializer& ObjectInitializer);
	
	// Call this to create the thread and start it going
	void StartProcess();
	
	// Getters
	FString getVersion() {
		return "1.0.1";
	}

	bool isConnected() {
		return canSendSocket;
	}
	
	TArray<float> GetBlendshapeValues();
	
	float avatarScale = 1.0;
	
	FAvatarData armatureData;
	
	std::queue<QueueItem> floatsBuffer;

	//Send a message (main thread)
	bool SocketSend();
	
	void StartMocapServer(FString ipString);
	
	bool StopMocapServer();

	static FPoseContext& UpdateCurrentPose(::
		FPoseContext& Output,
		TArray<ArmaturePoseMap> armatureToPoseMap,
		float ImportUniformScale,
		bool CanUpdateLengths,
		
		bool rnr,
		float wnr,
		bool rnl,
		float wnl,
	 	
		bool rsr,
		float wsr,
		bool rsl,
		float wsl,
	 	
		bool rcr,
		float wcr,
		bool rcl,
		float wcl,
		
		bool rar,
		float war,
		bool ral,
		float wal,
	
		bool rlr,
		float wlr,
		bool rll,
		float wll,
	
		bool rhr,
		float whr,
		bool rhl,
		float whl,

		bool rfr,
		float wfr,
		bool rfl,
		float wfl
		);
	static TArray<ArmaturePoseMap> InitializeBoneReferences(FPoseContext& Output, float ImportUniformScale);
	static bool ApplyMocapData(::
		FPoseContext& Output,
		TArray<ArmaturePoseMap>& armatureToPoseMap,
		
		bool rnr,
		float wnr,
		bool rnl,
		float wnl,
	 	
		bool rsr,
		float wsr,
		bool rsl,
		float wsl,

		bool rcr,
		float wcr,
		bool rcl,
		float wcl,
		
		bool rar,
		float war,
		bool ral,
		float wal,
	
		bool rlr,
		float wlr,
		bool rll,
		float wll,
	
		bool rhr,
		float whr,
		bool rhl,
		float whl,

		bool rfr,
		float wfr,
		bool rfl,
		float wfl,
		
		float ImportUniformScale = 1.0,
		bool CanUpdateLengths = true,
		bool CanUpdateBlendshapes = true
		);

protected:
	
	/** The IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	//UPROPERTY(EditAnywhere, Category = "APS (Live-Link)")
	FString ipAddr = TEXT("127.0.0.1");

	int ipPort = 10000;    

	//bool canSendSocket = false;

	FSocket* Socket;
	TArray<float>* floatsArray;

	TArray<ArmaturePoseMap> armatureToPoseMap;

	//Create Socket and connect to the server
	bool SocketCreate(bool SuppressWarnings = false);
	
	//Close Socket and disconnect the server
	bool SocketDestroy(bool SuppressWarnings = false);

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	static void UpdateBlendshapes(int startIdx, float* data, UAnimInstance* aInstance);

	void HandleDownloadRequest(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

	static const int hasPositionWidth = 3;
	static const int hasRotationWidth = 4;
};