// Copyright 2021 Animation Prep Studios. All Rights Reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "BoneContainer.h"
#include "APSMocapServerSync.h"
#include "AnimNode_APSLiveLinkNode.generated.h"

USTRUCT()
struct FBoneRef
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Settings")
		FBoneReference Bone;
};

USTRUCT(BlueprintType)
struct APSLIVELINK_API FAnimNode_APSLiveLinkNode : public FAnimNode_Base
{
	// The APS motion capture data sync custom animation node.
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Links)
	FPoseLink BasePose;

	TArray<ArmaturePoseMap> armatureToPoseMap;
	
public:
	FAnimNode_APSLiveLinkNode();

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext & Output) override;
	virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	// End of FAnimNode_Base interface
};
