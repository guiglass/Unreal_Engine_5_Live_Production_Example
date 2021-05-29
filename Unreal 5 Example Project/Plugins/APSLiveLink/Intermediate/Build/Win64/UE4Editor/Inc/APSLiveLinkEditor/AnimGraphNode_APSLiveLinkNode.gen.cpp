// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSLiveLinkEditor/Public/AnimGraphNode_APSLiveLinkNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_APSLiveLinkNode() {}
// Cross Module References
	APSLIVELINKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_NoRegister();
	APSLIVELINKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_APSLiveLinkEditor();
	APSLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode();
// End Cross Module References
	void UAnimGraphNode_APSLiveLinkNode::StaticRegisterNativesUAnimGraphNode_APSLiveLinkNode()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_NoRegister()
	{
		return UAnimGraphNode_APSLiveLinkNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLinkEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "AnimGraphNode_APSLiveLinkNode.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_APSLiveLinkNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_APSLiveLinkNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_APSLiveLinkNode, Node), Z_Construct_UScriptStruct_FAnimNode_APSLiveLinkNode, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_APSLiveLinkNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::ClassParams = {
		&UAnimGraphNode_APSLiveLinkNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_APSLiveLinkNode, 998662870);
	template<> APSLIVELINKEDITOR_API UClass* StaticClass<UAnimGraphNode_APSLiveLinkNode>()
	{
		return UAnimGraphNode_APSLiveLinkNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_APSLiveLinkNode(Z_Construct_UClass_UAnimGraphNode_APSLiveLinkNode, &UAnimGraphNode_APSLiveLinkNode::StaticClass, TEXT("/Script/APSLiveLinkEditor"), TEXT("UAnimGraphNode_APSLiveLinkNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_APSLiveLinkNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
