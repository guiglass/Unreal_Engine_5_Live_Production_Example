// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "APSLiveLink/Public/APSClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPSClient() {}
// Cross Module References
	APSLIVELINK_API UEnum* Z_Construct_UEnum_APSLiveLink_SyncRates();
	UPackage* Z_Construct_UPackage__Script_APSLiveLink();
	APSLIVELINK_API UClass* Z_Construct_UClass_UAPSClient_NoRegister();
	APSLIVELINK_API UClass* Z_Construct_UClass_UAPSClient();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* SyncRates_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_APSLiveLink_SyncRates, Z_Construct_UPackage__Script_APSLiveLink(), TEXT("SyncRates"));
		}
		return Singleton;
	}
	template<> APSLIVELINK_API UEnum* StaticEnum<SyncRates>()
	{
		return SyncRates_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SyncRates(SyncRates_StaticEnum, TEXT("/Script/APSLiveLink"), TEXT("SyncRates"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_APSLiveLink_SyncRates_Hash() { return 968713681U; }
	UEnum* Z_Construct_UEnum_APSLiveLink_SyncRates()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_APSLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SyncRates"), 0, Get_Z_Construct_UEnum_APSLiveLink_SyncRates_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FPS_30", (int64)FPS_30 },
				{ "FPS_15", (int64)FPS_15 },
				{ "FPS_40", (int64)FPS_40 },
				{ "FPS_50", (int64)FPS_50 },
				{ "FPS_60", (int64)FPS_60 },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FPS_15.DisplayName", "30 FPS" },
				{ "FPS_15.Name", "FPS_15" },
				{ "FPS_30.DisplayName", "15 FPS" },
				{ "FPS_30.Name", "FPS_30" },
				{ "FPS_40.DisplayName", "40 FPS" },
				{ "FPS_40.Name", "FPS_40" },
				{ "FPS_50.DisplayName", "50 FPS" },
				{ "FPS_50.Name", "FPS_50" },
				{ "FPS_60.DisplayName", "60 FPS" },
				{ "FPS_60.Name", "FPS_60" },
				{ "ModuleRelativePath", "Public/APSClient.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_APSLiveLink,
				nullptr,
				"SyncRates",
				"SyncRates",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAPSClient::execSyncAvatarData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SyncAvatarData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAPSClient::execGetBlendshapeValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetBlendshapeValues();
		P_NATIVE_END;
	}
	void UAPSClient::StaticRegisterNativesUAPSClient()
	{
		UClass* Class = UAPSClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlendshapeValues", &UAPSClient::execGetBlendshapeValues },
			{ "SyncAvatarData", &UAPSClient::execSyncAvatarData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics
	{
		struct APSClient_eventGetBlendshapeValues_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APSClient_eventGetBlendshapeValues_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "APS (Live-Link)" },
		{ "Comment", "//Getters\n" },
		{ "ModuleRelativePath", "Public/APSClient.h" },
		{ "ToolTip", "Getters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPSClient, nullptr, "GetBlendshapeValues", nullptr, nullptr, sizeof(APSClient_eventGetBlendshapeValues_Parms), Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAPSClient_GetBlendshapeValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAPSClient_GetBlendshapeValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics::Function_MetaDataParams[] = {
		{ "Category", "APS (Live-Link)" },
		{ "Comment", "/** Calling this while connected to motion capture server will update the avatar's pose and blendshapes currently from APS.  */" },
		{ "ModuleRelativePath", "Public/APSClient.h" },
		{ "ToolTip", "Calling this while connected to motion capture server will update the avatar's pose and blendshapes currently from APS." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAPSClient, nullptr, "SyncAvatarData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAPSClient_SyncAvatarData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAPSClient_SyncAvatarData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAPSClient_NoRegister()
	{
		return UAPSClient::StaticClass();
	}
	struct Z_Construct_UClass_UAPSClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IpAddr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncRate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SyncRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAPSClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_APSLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAPSClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAPSClient_GetBlendshapeValues, "GetBlendshapeValues" }, // 2263431905
		{ &Z_Construct_UFunction_UAPSClient_SyncAvatarData, "SyncAvatarData" }, // 734169608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPSClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "APSClient.h" },
		{ "ModuleRelativePath", "Public/APSClient.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPSClient_Statics::NewProp_IpAddr_MetaData[] = {
		{ "Category", "APS (Live-Link)" },
		{ "Comment", "/** The IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1) */" },
		{ "ModuleRelativePath", "Public/APSClient.h" },
		{ "ToolTip", "The IP address to the PC running a APS motion capture server (default localhost = 127.0.0.1)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAPSClient_Statics::NewProp_IpAddr = { "IpAddr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAPSClient, IpAddr), METADATA_PARAMS(Z_Construct_UClass_UAPSClient_Statics::NewProp_IpAddr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAPSClient_Statics::NewProp_IpAddr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAPSClient_Statics::NewProp_SyncRate_MetaData[] = {
		{ "Category", "APS (Live-Link)" },
		{ "Comment", "/** The frequency at which to poll for motion capture data from the APS motion capture server. */" },
		{ "ModuleRelativePath", "Public/APSClient.h" },
		{ "ToolTip", "The frequency at which to poll for motion capture data from the APS motion capture server." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAPSClient_Statics::NewProp_SyncRate = { "SyncRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAPSClient, SyncRate), Z_Construct_UEnum_APSLiveLink_SyncRates, METADATA_PARAMS(Z_Construct_UClass_UAPSClient_Statics::NewProp_SyncRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAPSClient_Statics::NewProp_SyncRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAPSClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSClient_Statics::NewProp_IpAddr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAPSClient_Statics::NewProp_SyncRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAPSClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAPSClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAPSClient_Statics::ClassParams = {
		&UAPSClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAPSClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAPSClient_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAPSClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAPSClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAPSClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAPSClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAPSClient, 1912662502);
	template<> APSLIVELINK_API UClass* StaticClass<UAPSClient>()
	{
		return UAPSClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAPSClient(Z_Construct_UClass_UAPSClient, &UAPSClient::StaticClass, TEXT("/Script/APSLiveLink"), TEXT("UAPSClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAPSClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
