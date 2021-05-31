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

	TArray<ArmaturePoseMap> armatureToPoseMap;

	FPoseLink BasePose;

	//Apply bone translations for bones that can be stretched.
	//Some bones can translate as well as rotate, but translation is optional and may not be desired.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)")
	bool CanUpdateLengths = true;

	//Apply facial expression blendshapes to this mesh.
	//"Import Morph Targets" checkbox must be enabled when importing this avatar.*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)")
	bool CanUpdateBlendshapes = true;

	//This value must match the "Import Uniform Scale" value as found in the "Import Settings" under Mesh tab. This is very important!
	//If avatar appears stretched then please ensure the value is set exactly as was set in "Import Uniform Scale" when importing the avatar.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Import Settings")
	float ImportUniformScale = 1.0;

public:
	FAnimNode_APSLiveLinkNode();

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext& Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext& Context) override;
	virtual void Evaluate_AnyThread(FPoseContext & Output) override;
	//virtual void EvaluateComponentSpace_AnyThread(FComponentSpacePoseContext& Output) override;
	// End of FAnimNode_Base interface
};