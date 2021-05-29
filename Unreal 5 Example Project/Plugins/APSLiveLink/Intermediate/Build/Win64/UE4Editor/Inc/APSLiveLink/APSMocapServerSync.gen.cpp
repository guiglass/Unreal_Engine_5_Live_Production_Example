// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSLiveLink/Public/APSMocapServerSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPSMocapServerSync() {}
// Cross Module References
	APSLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarData();
	UPackage* Z_Construct_UPackage__Script_APSLiveLink();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	APSLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	APSLIVELINK_API UClass* Z_Construct_UClass_UAPSMocapServerSync_NoRegister();
	APSLIVELINK_API UClass* Z_Construct_UClass_UAPSMocapServerSync();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FAvatarData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APSLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FAvatarData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarData, Z_Construct_UPackage__Script_APSLiveLink(), TEXT("AvatarData"), sizeof(FAvatarData), Get_Z_Construct_UScriptStruct_FAvatarData_Hash());
	}
	return Singleton;
}
template<> APSLIVELINK_API UScriptStruct* StaticStruct<FAvatarData>()
{
	return FAvatarData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAvatarData(FAvatarData::StaticStruct, TEXT("/Script/APSLiveLink"), TEXT("AvatarData"), false, nullptr, nullptr);
static struct FScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarData
{
	FScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AvatarData")),new UScriptStruct::TCppStructOps<FAvatarData>);
	}
} ScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarData;
	struct Z_Construct_UScriptStruct_FAvatarData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hip_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arm_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_arm_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arm_scale_initial_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_arm_scale_initial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hip_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hip_scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_aInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blendshapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_blendshapes;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_blendshapeNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blendshapeNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_blendshapeNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scaleStartIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scaleStartIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blendshapStartIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_blendshapStartIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_height_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_height = { "hip_height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, hip_height), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale = { "arm_scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, arm_scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_initial_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_initial = { "arm_scale_initial", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, arm_scale_initial), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_initial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_scale = { "hip_scale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, hip_scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_aInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_aInstance = { "aInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, aInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_aInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_aInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapes_MetaData[] = {
		{ "Comment", "//the animations instance for setting the blendshapes\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "the animations instance for setting the blendshapes" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapes = { "blendshapes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, blendshapes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapes_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames_Inner = { "blendshapeNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames = { "blendshapeNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, blendshapeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_buffer_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, buffer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_buffer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones_Inner = { "bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAvatarBone, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones = { "bones", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_scaleStartIdx_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_scaleStartIdx = { "scaleStartIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, scaleStartIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_scaleStartIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_scaleStartIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapStartIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapStartIdx = { "blendshapStartIdx", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarData, blendshapStartIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapStartIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapStartIdx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_arm_scale_initial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_hip_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_aInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapeNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_scaleStartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarData_Statics::NewProp_blendshapStartIdx,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
		nullptr,
		&NewStructOps,
		"AvatarData",
		sizeof(FAvatarData),
		alignof(FAvatarData),
		Z_Construct_UScriptStruct_FAvatarData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAvatarData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_APSLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AvatarData"), sizeof(FAvatarData), Get_Z_Construct_UScriptStruct_FAvatarData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAvatarData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAvatarData_Hash() { return 647583089U; }
class UScriptStruct* FAvatarBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern APSLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FAvatarBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarBone, Z_Construct_UPackage__Script_APSLiveLink(), TEXT("AvatarBone"), sizeof(FAvatarBone), Get_Z_Construct_UScriptStruct_FAvatarBone_Hash());
	}
	return Singleton;
}
template<> APSLIVELINK_API UScriptStruct* StaticStruct<FAvatarBone>()
{
	return FAvatarBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAvatarBone(FAvatarBone::StaticStruct, TEXT("/Script/APSLiveLink"), TEXT("AvatarBone"), false, nullptr, nullptr);
static struct FScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarBone
{
	FScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AvatarBone")),new UScriptStruct::TCppStructOps<FAvatarBone>);
	}
} ScriptStruct_APSLiveLink_StaticRegisterNativesFAvatarBone;
	struct Z_Construct_UScriptStruct_FAvatarBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startIdxPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startIdxPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPosePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentPosePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hasPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startIdxRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_startIdxRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPoseRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentPoseRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_hasRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_iRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxPosition_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxPosition = { "startIdxPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, startIdxPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPosePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPosePosition = { "currentPosePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, currentPosePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPosePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPosePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasPosition = { "hasPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, hasPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxRotation_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxRotation = { "startIdxRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, startIdxRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPoseRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPoseRotation = { "currentPoseRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, currentPoseRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPoseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPoseRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasRotation = { "hasRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, hasRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_iRotation_MetaData[] = {
		{ "Comment", "//JSON Var\n" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ToolTip", "JSON Var" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_iRotation = { "iRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarBone, iRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_iRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_iRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPosePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_startIdxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_currentPoseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_hasRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarBone_Statics::NewProp_iRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
		nullptr,
		&NewStructOps,
		"AvatarBone",
		sizeof(FAvatarBone),
		alignof(FAvatarBone),
		Z_Construct_UScriptStruct_FAvatarBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAvatarBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_APSLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AvatarBone"), sizeof(FAvatarBone), Get_Z_Construct_UScriptStruct_FAvatarBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAvatarBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAvatarBone_Hash() { return 2100096619U; }
	void UAPSMocapServerSync::StaticRegisterNativesUAPSMocapServerSync()
	{
	}
	UClass* Z_Construct_UClass_UAPSMocapServerSync_NoRegister()
	{
		return UAPSMocapServerSync::StaticClass();
	}
	struct Z_Construct_UClass_UAPSMocapServerSync_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAPSMocapServerSync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPSMocapServerSync_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "APSMocapServerSync.h" },
		{ "ModuleRelativePath", "Public/APSMocapServerSync.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAPSMocapServerSync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSMocapServerSync>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAPSMocapServerSync_Statics::ClassParams = {
		&UAPSMocapServerSync::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAPSMocapServerSync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAPSMocapServerSync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAPSMocapServerSync()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAPSMocapServerSync_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAPSMocapServerSync, 750027847);
	template<> APSLIVELINK_API UClass* StaticClass<UAPSMocapServerSync>()
	{
		return UAPSMocapServerSync::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAPSMocapServerSync(Z_Construct_UClass_UAPSMocapServerSync, &UAPSMocapServerSync::StaticClass, TEXT("/Script/APSLiveLink"), TEXT("UAPSMocapServerSync"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAPSMocapServerSync);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
