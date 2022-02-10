// Copyright 2021 Animation Prep Studios - all rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "AnimNode_APSLiveLinkNode.h"
#include "AnimGraphNode_APSLiveLinkNode.generated.h"

struct FAnimMode_OrientationWarping;
/**
*
*/
UCLASS()
class APSLIVELINKEDITOR_API UAnimGraphNode_APSLiveLinkNode : public UAnimGraphNode_Base
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Settings")
		FAnimNode_APSLiveLinkNode Node;

	//~ Begin UEdGraphNode Interface.
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//~ End UEdGraphNode Interface.

	//~ Begin UAnimGraphNode_Base Interface
	virtual FString GetNodeCategory() const override;
	//~ End UAnimGraphNode_Base Interface

	UAnimGraphNode_APSLiveLinkNode();


};
