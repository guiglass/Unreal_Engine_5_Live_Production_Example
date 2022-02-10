// Copyright 2021 Animation Prep Studios - all rights reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "APSVirtualTrackerNode.generated.h"

UCLASS(Blueprintable)
class APSLIVELINK_API UAPSVirtualTrackerNode : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public :
	// Called when the game starts or when spawned

	UFUNCTION(BlueprintPure, Category = "APS Live-Link")
	static void GetLiveLinkTrackerLocation(int ClientNumber, int TrackerNumber, FTransform &transform);
};