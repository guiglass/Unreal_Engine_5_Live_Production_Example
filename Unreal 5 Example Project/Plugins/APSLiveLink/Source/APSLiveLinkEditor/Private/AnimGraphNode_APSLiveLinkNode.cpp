// Copyright 2018 Sean Chen. All Rights Reserved.

#include "AnimGraphNode_APSLiveLinkNode.h"
#include "APSLiveLinkEditor.h"

#define LOCTEXT_NAMESPACE "APS"

UAnimGraphNode_APSLiveLinkNode::UAnimGraphNode_APSLiveLinkNode()
{

}

FLinearColor UAnimGraphNode_APSLiveLinkNode::GetNodeTitleColor() const
{
	return FLinearColor(0.7f, 0.7f, 0.7f);
}

FText UAnimGraphNode_APSLiveLinkNode::GetTooltipText() const
{
	return LOCTEXT("APSLiveLinkNode", "Avatar Pose Receiver");
}

FText UAnimGraphNode_APSLiveLinkNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("APSLiveLinkNode", "Avatar Pose Receiver (APS Live-Link)");
}

FString UAnimGraphNode_APSLiveLinkNode::GetNodeCategory() const
{
	return TEXT("APS SDK (Live-Link)");
}

#undef LOCTEXT_NAMESPACE

