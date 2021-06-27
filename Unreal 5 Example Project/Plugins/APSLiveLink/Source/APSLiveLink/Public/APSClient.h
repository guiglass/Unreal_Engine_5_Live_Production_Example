// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "APSMocapServerSync.h"
#include "Components/ActorComponent.h"
#include "APSClient.generated.h"

// The APS motion capture data sync module.
static UAPSMocapServerSync* APSClient;

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
		return APSClient->GetBlendshapeValues();
	}
	
	/** The IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)")
	FString IpAddr = TEXT("127.0.0.1");
	//Note: APS Live-Link Port = 10000

	/** The listening port number on the PC running a APS motion capture server, port number must exactly match listening port on server (default 10000) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)")
	int IpPort = 10000;
	
	/** The frequency at which to poll for motion capture data from the APS motion capture server. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)")
	TEnumAsByte<SyncRates> SyncRate = FPS_60;

	/** The avatar mesh must match the motion capture avatar exactly. Be sure to also set the Skeletal Mesh. */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "APS (Live-Link)")
	//UPoseableMeshComponent* MyMesh = nullptr;

	/** Calling this while connected to motion capture server will update the avatar's pose and blendshapes currently from APS.  */
	UFUNCTION(BlueprintCallable, Category = "APS (Live-Link)")
	void SyncAvatarData();
	void ConnectToServer();

protected:
	
	// The APS motion capture data sync module.
	//UAPSMocapServerSync* APSClient;

	// Main update timer, since last update
	float LastSendTime; 
	
	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called when the game ends	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
