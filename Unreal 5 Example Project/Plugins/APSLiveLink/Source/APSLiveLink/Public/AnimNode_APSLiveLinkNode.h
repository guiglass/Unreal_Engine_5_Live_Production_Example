// Copyright 2021 Animation Prep Studios - all rights reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "APSMocapServerSync.h"
#include "AnimNode_APSLiveLinkNode.generated.h"
/*
USTRUCT()
struct FBoneRef
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = "Settings")
		FBoneReference Bone;
};
*/
USTRUCT(BlueprintType)
struct APSLIVELINK_API FAnimNode_APSLiveLinkNode : public FAnimNode_Base
{
	// The APS motion capture data sync custom animation node.
	GENERATED_BODY()

	TArray<ArmaturePoseMap> armatureToPoseMap = TArray<ArmaturePoseMap>();
	TArray<SmartName::UID_Type> blendshapeCurveMap;
	TArray<float> blendshapeValuesMap;

	FPoseLink BasePose;

	USkeletalMesh *SkeletalMesh;
	
	//Connect multiple avatars and PCs in a single scene.
	//Allows specifying which client connection to use as the source for motion capture data. The client number corresponds to the "client" designations of the APSCore scene object (Default = Client_0)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)")
	TEnumAsByte<ClientNumbers> ClientNumber = CLIENT_0;
	
	//Apply bone translations for bones that can be stretched.
	//Some bones can translate as well as rotate, but translation is optional and may not be desired.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)")
	bool CanUpdateLengths = true;

	//Apply blendshapes from APS avatar to the UE avatar mesh. For use with .fbx avatars that include blendshapes.
	//"Import Morph Targets" checkbox must be enabled when importing this avatar .fbx.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)")
	bool CanUpdateBlendshapes = false;

	//Optional!! UE sometimes removes common substrings from the blendshape names, eg. "Genesis8_1Female_"
	//If morph target names in UE don't match the fbx shapekey names exactly, try entering the missing string that UE has removed.
	//Note: You may leave this field blank for most avatars.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings (APS Live-Link)", meta=(EditCondition="CanUpdateBlendshapes", EditConditionHides))
	FString BlendshapeNamesTruncatedSubstring = "";
	
	//If the root scale of the armature is not 1,1,1 it can sometimes cause avatar size in scene to appear incorrect.
	//If avatar scaling appears wrong please try enabling this toggle.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scale Fix (APS Live-Link)")
	bool ApplyRootScale = false;

	//Use Retargeting to correct Neck and Head bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Neck)", meta=(DisplayName = "Rotation"))
	bool rnr = false;
	//Use Retargeting to correct Neck and Head bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Neck)", meta=(DisplayName = "Location"))
	bool rnl = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Neck)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float wnr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Neck)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wnl = 1.0;

	
	//Use Retargeting to correct Spine bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Spine)", meta=(DisplayName = "Rotation"))
	bool rsr = false;
	//Use Retargeting to correct Spine bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Spine)", meta=(DisplayName = "Location"))
	bool rsl = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Spine)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float wsr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Spine)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wsl = 1.0;
	
		
	//Use Retargeting to correct Calvicle bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Shoulders)", meta=(DisplayName = "Rotation"))
	bool rcr = false;
	//Use Retargeting to correct Calvicle bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Shoulders)", meta=(DisplayName = "Location"))
	bool rcl = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Shoulders)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float wcr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Shoulders)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wcl = 1.0;
	
	//Use Retargeting to correct Leg bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Legs)", meta=(DisplayName = "Rotation"))
	bool rlr = false;
	//Use Retargeting to correct Leg bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Legs)", meta=(DisplayName = "Location"))
	bool rll = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Legs)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float wlr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Legs)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wll = 1.0;

	
	//Use Retargeting to correct Arm bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Arms)", meta=(DisplayName = "Rotation"))
	bool rar = false;
	//Use Retargeting to correct Arm bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Arms)", meta=(DisplayName = "Location"))
	bool ral = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Arms)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float war = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Arms)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wal = 1.0;


	//Use Retargeting to correct Hand bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Hands)", meta=(DisplayName = "Rotation"))
	bool rhr = false;
	//Use Retargeting to correct Hand bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Hands)", meta=(DisplayName = "Location"))
	bool rhl = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Hands)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float whr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Hands)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float whl = 1.0;


	//Use Retargeting to correct Finger bones rotation offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Fingers)", meta=(DisplayName = "Rotation"))
	bool rfr = false;
	//Use Retargeting to correct Finger bones location offsets.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Fingers)", meta=(DisplayName = "Location"))
	bool rfl = false;
	
	//Retargeting rotation offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Fingers)", meta=(DisplayName = "Rotation Weight", UIMin = 0.0, UIMax = 1.0))
	float wfr = 1.0;
	//Retargeting location offset weight.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Retargeting (Fingers)", meta=(DisplayName = "Location Weight", UIMin = 0.0, UIMax = 1.0))
	float wfl = 1.0;
	
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