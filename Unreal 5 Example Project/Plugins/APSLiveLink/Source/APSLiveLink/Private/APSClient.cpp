// Fill out your copyright notice in the Description page of Project Settings.

#include "APSClient.h"

// Sets default values for this component's properties
UAPSClient::UAPSClient()
{
	PrimaryComponentTick.bCanEverTick = true;

	APSClient = CreateDefaultSubobject<UAPSMocapServerSync>(FName("APSMocapServerSync"));
}

void UAPSClient::SyncAvatarData()
{
	if (APSClient->isConnected() && LastSendTime >= 1.0/SyncRate)
	{
		LastSendTime = 0;
		APSClient->SocketSend(); //Get update from mocap server and apply it to the poseable mesh
	}
}

void UAPSClient::ConnectToServer()
{
	if (APSClient == nullptr)
		return;
	
	APSClient->StartMocapServer(IpAddr);
}

// Called when the game starts
void UAPSClient::BeginPlay()
{
	Super::BeginPlay();
	
	ConnectToServer();
}

void UAPSClient::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (APSClient == nullptr)
		return;

	if (EndPlayReason == EEndPlayReason::Destroyed)
	{
		APSClient->StopMocapServer();
		UE_LOG(LogTemp, Warning, TEXT("Mocap Server Connection Closed."));
	}
}

// Called every frame
void UAPSClient::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (APSClient == nullptr)
		return;

	if (APSClient->isConnected())
		SyncAvatarData();
	else
		if (LastSendTime >= 5.0) //retry connection every 5 seconds
		{
			LastSendTime = 0;
			ConnectToServer();
			UE_LOG(LogTemp, Warning, TEXT("Retrying Connection!"));
		}
	LastSendTime += DeltaTime;
}

