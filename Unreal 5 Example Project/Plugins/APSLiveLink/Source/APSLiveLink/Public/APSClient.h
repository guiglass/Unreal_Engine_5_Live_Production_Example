// Copyright 2021 Animation Prep Studios - all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "APSMocapServerSync.h"
#include "Components/ActorComponent.h"
#include "APSClient.generated.h"

// The APS motion capture data sync module.
////static UAPSMocapServerSync* APSClientOLD;
static TArray<UAPSMocapServerSync*> APSClients = {nullptr,nullptr,nullptr,nullptr};

UENUM()
enum SyncRates
{
	FPS_30 = 15  UMETA(DisplayName = "15 FPS"),
	FPS_15 = 30  UMETA(DisplayName = "30 FPS"),
	FPS_40 = 40  UMETA(DisplayName = "40 FPS"),
	FPS_50 = 50  UMETA(DisplayName = "50 FPS"),
	FPS_60 = 60  UMETA(DisplayName = "60 FPS"),
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class APSLIVELINK_API UAPSClient : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAPSClient();

	//Getters
	UFUNCTION(BlueprintCallable, Category = "APS (Live-Link)")
	TArray<float> GetBlendshapeValues() {
		auto APSClient = APSClients[0];

		return APSClient->GetBlendshapeValues();
	}

	TArray<FString> IpAddrsArray;
	TArray<int> IpPortsArray;
	TArray<SyncRates> SyncRatesArray;

	//CLIENT 0
	
	/** The destination IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 0", Meta = (DisplayName = "Ip Addr"))
	FString IpAddr0 = TEXT("127.0.0.1");

	/** The listening port number on the PC running a APS motion capture server, port number must exactly match listening port on server (default 10000)
	* Set to -1 to disable this client.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 0", Meta = (DisplayName = "Ip Port"))
	int IpPort0 = 10000;

	/** The frequency at which to poll for motion capture data from the APS motion capture server. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 0", Meta = (DisplayName = "Sync Rate"))
	TEnumAsByte<SyncRates> SyncRate0 = FPS_60;

	//CLIENT 1
	
	/** The destination IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 1", Meta = (DisplayName = "Ip Addr"))
	FString IpAddr1 = TEXT("127.0.0.1");

	/** The listening port number on the PC running a APS motion capture server, port number must exactly match listening port on server (default 10000)
	 * Set to -1 to disable this client.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 1", Meta = (DisplayName = "Ip Port"))
	int IpPort1 = -1;

	/** The frequency at which to poll for motion capture data from the APS motion capture server. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 1", Meta = (DisplayName = "Sync Rate"))
	TEnumAsByte<SyncRates> SyncRate1 = FPS_60;

	//CLIENT 2
	
	/** The destination IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 2", Meta = (DisplayName = "Ip Addr"))
	FString IpAddr2 = TEXT("127.0.0.1");

	/** The listening port number on the PC running a APS motion capture server, port number must exactly match listening port on server (default 10000)
	* Set to -1 to disable this client.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 2", Meta = (DisplayName = "Ip Port"))
	int IpPort2 = -1;

	/** The frequency at which to poll for motion capture data from the APS motion capture server. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 2", Meta = (DisplayName = "Sync Rate"))
	TEnumAsByte<SyncRates> SyncRate2 = FPS_60;

	//CLIENT 3
	
	/** The destination IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 3", Meta = (DisplayName = "Ip Addr"))
	FString IpAddr3 = TEXT("127.0.0.1");

	/** The listening port number on the PC running a APS motion capture server, port number must exactly match listening port on server (default 10000)
	* Set to -1 to disable this client.*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 3", Meta = (DisplayName = "Ip Port"))
	int IpPort3 = -1;

	/** The frequency at which to poll for motion capture data from the APS motion capture server. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link) Client 3", Meta = (DisplayName = "Sync Rate"))
	TEnumAsByte<SyncRates> SyncRate3 = FPS_60;


	

	/** The avatar mesh must match the motion capture avatar exactly. Be sure to also set the Skeletal Mesh. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)")
	//UPoseableMeshComponent* MyMesh = nullptr;

	/** Calling this while connected to motion capture server will update the avatar's pose and blendshapes currently from APS.  */
	UFUNCTION(BlueprintCallable, Category = "APS (Live-Link)")
	void SyncAvatarData(int clientNumber);
	void ConnectToServer(FString ip, int port, int client);

protected:
		
	// Main update timer, since last update
	//float LastSendTime; 
	
	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called when the game ends	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
