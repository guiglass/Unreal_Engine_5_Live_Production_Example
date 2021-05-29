// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSLiveLink/Public/AnimNode_APSLiveLinkNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_APSLiveLinkNode() {}
// Cross Module References
	APSLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode();
	UPackage* Z_Construct_UPackage__Script_APSLiveLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	APSLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FBoneRef();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_APSLiveLinkNode>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_APSLiveLinkNode cannot be polymorphic unless super FAnimNode_Base is polymorphic");

class UScriptStruct* FAnimNode_APSLiveLinkNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APSLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode, Z_Construct_UPackage__Script_APSLiveLink(), TEXT("AnimNode_APSLiveLinkNode"), sizeof(FAnimNode_APSLiveLinkNode), Get_Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Hash());
	}
	return Singleton;
}
template<> APSLIVELINK_API UScriptStruct* StaticStruct<FAnimNode_APSLiveLinkNode>()
{
	return FAnimNode_APSLiveLinkNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_APSLiveLinkNode(FAnimNode_APSLiveLinkNode::StaticStruct, TEXT("/Script/APSLiveLink"), TEXT("AnimNode_APSLiveLinkNode"), false, nullptr, nullptr);
static struct FScriptStruct_APSLiveLink_StaticRegisterNativesFAnimNode_APSLiveLinkNode
{
	FScriptStruct_APSLiveLink_StaticRegisterNativesFAnimNode_APSLiveLinkNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_APSLiveLinkNode")),new UScriptStruct::TCppStructOps<FAnimNode_APSLiveLinkNode>);
	}
} ScriptStruct_APSLiveLink_StaticRegisterNativesFAnimNode_APSLiveLinkNode;
	struct Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_APSLiveLinkNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_APSLiveLinkNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNode_APSLiveLinkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_APSLiveLinkNode, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewProp_BasePose_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::NewProp_BasePose,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_APSLiveLinkNode",
		sizeof(FAnimNode_APSLiveLinkNode),
		alignof(FAnimNode_APSLiveLinkNode),
		Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_APSLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_APSLiveLinkNode"), sizeof(FAnimNode_APSLiveLinkNode), Get_Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode_Hash() { return 3224669764U; }
class UScriptStruct* FBoneRef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APSLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FBoneRef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneRef, Z_Construct_UPackage__Script_APSLiveLink(), TEXT("BoneRef"), sizeof(FBoneRef), Get_Z_Construct_UScriptStruct_FBoneRef_Hash());
	}
	return Singleton;
}
template<> APSLIVELINK_API UScriptStruct* StaticStruct<FBoneRef>()
{
	return FBoneRef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneRef(FBoneRef::StaticStruct, TEXT("/Script/APSLiveLink"), TEXT("BoneRef"), false, nullptr, nullptr);
static struct FScriptStruct_APSLiveLink_StaticRegisterNativesFBoneRef
{
	FScriptStruct_APSLiveLink_StaticRegisterNativesFBoneRef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneRef")),new UScriptStruct::TCppStructOps<FBoneRef>);
	}
} ScriptStruct_APSLiveLink_StaticRegisterNativesFBoneRef;
	struct Z_Construct_UScriptStruct_FBoneRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRef_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_APSLiveLinkNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneRef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRef_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_APSLiveLinkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneRef_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRef, Bone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRef_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRef_Statics::NewProp_Bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRef_Statics::NewProp_Bone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
		nullptr,
		&NewStructOps,
		"BoneRef",
		sizeof(FBoneRef),
		alignof(FBoneRef),
		Z_Construct_UScriptStruct_FBoneRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneRef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneRef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_APSLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneRef"), sizeof(FBoneRef), Get_Z_Construct_UScriptStruct_FBoneRef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneRef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneRef_Hash() { return 550118211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
