// Copyright 2021 Animation Prep Studios - all rights reserved.

#pragma once

#include "CoreMinimal.h"

#include <queue>


#include "Animation/AnimNodeBase.h"
#include "Http.h"
#include "Sockets.h"

#include "APSMocapServerSync.generated.h"


class UAPSMocapServerSync;
// The APS motion capture data sync module.
////static UAPSMocapServerSync* APSData;
//static float armatureBaseScale = 8.548534;
	
	
UENUM()
enum ClientNumbers
{
	CLIENT_0 = 0  UMETA(DisplayName = "Client 0"),
	CLIENT_1 = 1  UMETA(DisplayName = "Client 1"),
	CLIENT_2 = 2  UMETA(DisplayName = "Client 2"),
	CLIENT_3 = 3  UMETA(DisplayName = "Client 3"),
};

UENUM()
enum TrackerNumbers
{
	TRACKER_0 = 0  UMETA(DisplayName = "Tracker 0"),
	TRACKER_1 = 1  UMETA(DisplayName = "Tracker 1"),
	TRACKER_2 = 2  UMETA(DisplayName = "Tracker 2"),
	TRACKER_3 = 3  UMETA(DisplayName = "Tracker 3"),
	TRACKER_4 = 4  UMETA(DisplayName = "Tracker 4"),
	TRACKER_5 = 5  UMETA(DisplayName = "Tracker 5"),
	TRACKER_6 = 6  UMETA(DisplayName = "Tracker 6"),
	TRACKER_7 = 7  UMETA(DisplayName = "Tracker 7"),
	TRACKER_8 = 8  UMETA(DisplayName = "Tracker 8"),
	TRACKER_9 = 9  UMETA(DisplayName = "Tracker 9"),
	TRACKER_10 = 10  UMETA(DisplayName = "Tracker 10"),
	TRACKER_11 = 11  UMETA(DisplayName = "Tracker 11"),
	TRACKER_12 = 12  UMETA(DisplayName = "Tracker 12"),
	TRACKER_13 = 13  UMETA(DisplayName = "Tracker 13"),
	TRACKER_14 = 14  UMETA(DisplayName = "Tracker 14"),
};

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
	FQuat hip_local_rot = FQuat(0,0,0,1); //the rotation of any parent bone (root bone)

	UPROPERTY()
	FVector armatureBaseScale = FVector(1,1,1); //this is the scale of the .fbx base transform (the skeletal mesh armature very first transform's sale), //ADDED 5.0.6 
	
	//UPROPERTY()
	//UAnimInstance* aInstance; //the animations instance for setting the blendshapes
	
	UPROPERTY()
	int32  blendshapes; //JSON Var (blendshapeCount)

	UPROPERTY()
	TArray<FName> blendshapeNames; //JSON Var

	//UPROPERTY()
	//TArray<int> blendshapeUIDs;

	//UPROPERTY()
	//TArray<float> blendshapeValues;
	
	UPROPERTY()
	int32  buffer; //JSON Var

	UPROPERTY()
	TArray<FAvatarBone> bones; //JSON Var

	UPROPERTY()
	int scaleStartIdx = -1;
	
	UPROPERTY()
	int blendshapeStartIdx = -1;	
};

struct QueueItem
{
	int size = -1; //the length of the floatData array
	float* floatData; //the socket data from APS converted to floats array
	uint8 controlByte0; //the virtual trackers active indexes control byte
	uint8 controlByte1; //the virtual trackers active indexes control byte
};

//map from APS armature indexes to Unreal reference pose indexes
struct ArmaturePoseMap
{
	int armatureBone = -1; //APS armature json data indexes
	int poseBone = -1;	//Unreal ref pose indexes 
};

////static bool canSendSocket = false;
	
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class APSLIVELINK_API UAPSMocapServerSync : public UActorComponent
{
	GENERATED_BODY()

public:

	UAPSMocapServerSync(const FObjectInitializer& ObjectInitializer);
	
	// Call this to create the thread and start it going
	
	bool isConnected() {
		return canSendSocket;
	}

	bool canSendSocket = false;
	
	// Main update timer, since last update
	float LastSendTime; 

	UAPSMocapServerSync* APSData;

	TArray<float> GetBlendshapeValues();


	float avatarScale = 1.0;
	
	FAvatarData armatureData;
	
	std::queue<QueueItem> floatsBuffer;

	//Send a message (main thread)
	bool SocketSend();
	
	void StartMocapServer(FString ip, int port, int client);
	
	bool StopMocapServer();

	static FPoseContext& UpdateCurrentPose(::
		FPoseContext& Output,
		
		TArray<ArmaturePoseMap>& armatureToPoseMap,
		TArray<SmartName::UID_Type>& blendshapeCurveMap,
		TArray<float>& blendshapeValuesMap,

		bool CanUpdateLengths,
		bool CanUpdateBlendshapes,
		FString BlendshapeNamesTruncatedSubstring,
		int ClientNumber,
		
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
	static void InitializeARKitReferences(FPoseContext& Output, TArray<SmartName::UID_Type>& blendshapeIDs, TArray<float>& blendshapeValuesMap, int ClientNumber, FString BlendshapeNamesTruncatedSubstring);	
	static TArray<ArmaturePoseMap> InitializeBoneReferences(FPoseContext& Output, int ClientNumber, USkeletalMesh *SkeletalMesh);

	static bool ApplyMocapData(::
	                           FPoseContext& Output,
	                           TArray<ArmaturePoseMap>& armatureToPoseMap,
	                           TArray<SmartName::UID_Type>& blendshapeCurveMap,
	                           TArray<float>& blendshapeValuesMap,

	                           USkeletalMesh *MyMesh,
	                           int ClientNumber,
		
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

	                           bool CanUpdateLengths = true,
	                           bool CanUpdateBlendshapes = true,
	                           FString BlendshapeNamesTruncatedSubstring = "",
	                           bool ApplyArmatureBaseScale = false
	);

	static void UpdateTrackedObjectLocal(FTransform *transform, int *iOffset, QueueItem buffer, float scale);
	
	static bool GetTrackerObjectData(FTransform &transform, int ClientNumber, int TrackerNumber);
	
	static void GetTrackerIndexOffset(int *iOffset, int TrackerNumber, int controlByte0, int controlByte1);
	
	static void ApplyARKitData(FPoseContext& Output, TArray<SmartName::UID_Type>& blendshapeCurveMap, TArray<float>& blendshapeValuesMap, int ClientNumber);
	
	static void UpdateCurves(FPoseContext& Output, TArray<SmartName::UID_Type>& blendshapeCurveMap, TArray<float>& blendshapeValuesMap, int ClientNumber, FString BlendshapeNamesTruncatedSubstring);

protected:

	/*For multi-avatar scenes. Set the client number to target a specific clinet in the APSCore APSClient. Default = 0*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)", meta = (ClampMin = "0", ClampMax = "16", UIMin = "0", UIMax = "16"))
	ClientNumbers ClientNumber = CLIENT_0;
	
	/** The IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	//UPROPERTY(EditAnywhere, Category = "APS (Live-Link)")
	FString ipAddr = TEXT("127.0.0.1");

	int32 ipPort = 10000;    

	FSocket* Socket;
	TArray<float>* floatsArray;

	TArray<ArmaturePoseMap> armatureToPoseMap;

	//Create Socket and connect to the server
	bool SocketCreate(bool SuppressWarnings = false);
	
	//Close Socket and disconnect the server
	bool SocketDestroy(bool SuppressWarnings = false);

	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	//static void UpdateBlendshapes(int startIdx, float* data, UAnimInstance* aInstance);

	void HandleDownloadRequest(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

	static const int hasPositionWidth = 3;
	static const int hasRotationWidth = 4;
};