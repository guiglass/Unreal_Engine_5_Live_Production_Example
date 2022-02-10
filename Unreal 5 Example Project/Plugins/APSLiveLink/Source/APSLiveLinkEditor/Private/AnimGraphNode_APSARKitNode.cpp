// Copyright 2021 Animation Prep Studios - all rights reserved.

#include "AnimGraphNode_APSARKitNode.h"
#include "APSLiveLinkEditor.h"

#define LOCTEXT_NAMESPACE "APS"

UAnimGraphNode_APSARKitNode::UAnimGraphNode_APSARKitNode()
{

}

FLinearColor UAnimGraphNode_APSARKitNode::GetNodeTitleColor() const
{
	return FLinearColor(0.7f, 0.7f, 0.7f);
}

FText UAnimGraphNode_APSARKitNode::GetTooltipText() const
{
	return LOCTEXT("APSARKitNode", "Avatar ARKit Receiver");
}

FText UAnimGraphNode_APSARKitNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("APSARKitNode", "Avatar ARKit Receiver (APS Live-Link)");
}

FString UAnimGraphNode_APSARKitNode::GetNodeCategory() const
{
	return TEXT("APS SDK (Live-Link)");
}

#undef LOCTEXT_NAMESPACE