// Copyright 2021 Animation Prep Studios - all rights reserved.

#include "APSClient.h"

// Sets default values for this component's properties
UAPSClient::UAPSClient()
{
	PrimaryComponentTick.bCanEverTick = true;
	
	APSClients[0] = CreateDefaultSubobject<UAPSMocapServerSync>(FName("APSMocapServerSync_Client1"));
	APSClients[1] = CreateDefaultSubobject<UAPSMocapServerSync>(FName("APSMocapServerSync_Client2"));
	
	//APSClients[ClientNumber] = CreateDefaultSubobject<UAPSMocapServerSync>(FName("APSMocapServerSync"));
}

void UAPSClient::SyncAvatarData(int clientNumber)
{
	if (APSClients[clientNumber]->isConnected() && APSClients[clientNumber]->LastSendTime >= 1.0/SyncRatesArray[clientNumber])
	{
		APSClients[clientNumber]->LastSendTime = 0;
		APSClients[clientNumber]->SocketSend(); //Get update from mocap server and apply it to the poseable mesh
	}
}

void UAPSClient::ConnectToServer(FString ip, int port, int client)
{
	APSClients[client]->StartMocapServer(ip, port, client);

	////APSClients[ClientNumber]->StartMocapServer(IpAddr, IpPort, ClientNumber);
}

bool validPortNumber(unsigned x)
{
	return  ((x-1024) <= (65535-1024));
}

// Called when the game starts
void UAPSClient::BeginPlay()
{	
	Super::BeginPlay();

	IpAddrsArray = {
		IpAddr0,
		IpAddr1,
		IpAddr2,
		IpAddr3,
	};

	IpPortsArray = {
		IpPort0,
		IpPort1,
		IpPort2,
		IpPort3,		
	};

	SyncRatesArray = {
		SyncRate0,
		SyncRate1,
		SyncRate2,
		SyncRate3,		
	};

	for (int clientNumber = 0; clientNumber < APSClients.Num(); clientNumber++)
	{
		if (APSClients[clientNumber] == nullptr)
			continue;

		if (validPortNumber(IpPortsArray[clientNumber]))
			APSClients[clientNumber]->StartMocapServer(IpAddrsArray[clientNumber], IpPortsArray[clientNumber], clientNumber);
	}
	
	////ConnectToServer();
	
}

void UAPSClient::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (int clientNumber = 0; clientNumber < APSClients.Num(); clientNumber++)
	{
		if (APSClients[clientNumber] == nullptr)
			continue;

		if (EndPlayReason == EEndPlayReason::Destroyed)
		{
			APSClients[clientNumber]->StopMocapServer();
			UE_LOG(LogTemp, Warning, TEXT("Client_%d: Mocap Server Connection Closed."), clientNumber);
		}
	}
	APSClients = {nullptr,nullptr,nullptr,nullptr};
}

// Called every frame
void UAPSClient::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	for (int clientNumber = 0; clientNumber < APSClients.Num(); clientNumber++)
	{
		if (APSClients[clientNumber] == nullptr)
			continue;

		if (!validPortNumber(IpPortsArray[clientNumber]))
			continue;
		
		if (APSClients[clientNumber]->isConnected())
			SyncAvatarData(clientNumber);
		else
			if (APSClients[clientNumber]->LastSendTime >= 5.0) //retry connection every 5 seconds
			{
				
				APSClients[clientNumber]->LastSendTime = 0;
				APSClients[clientNumber]->StartMocapServer(IpAddrsArray[clientNumber], IpPortsArray[clientNumber], clientNumber);
				UE_LOG(LogTemp, Warning, TEXT("Client_%d: Retrying Connection!"), clientNumber);
			}
		APSClients[clientNumber]->LastSendTime += DeltaTime;
	}
}

