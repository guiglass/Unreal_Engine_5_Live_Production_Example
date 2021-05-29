// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APSLIVELINK_APSClient_generated_h
#error "APSClient.generated.h already included, missing '#pragma once' in APSClient.h"
#endif
#define APSLIVELINK_APSClient_generated_h

#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_SPARSE_DATA
#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncAvatarData); \
	DECLARE_FUNCTION(execGetBlendshapeValues);


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncAvatarData); \
	DECLARE_FUNCTION(execGetBlendshapeValues);


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAPSClient(); \
	friend struct Z_Construct_UClass_UAPSClient_Statics; \
public: \
	DECLARE_CLASS(UAPSClient, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/APSLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UAPSClient)


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAPSClient(); \
	friend struct Z_Construct_UClass_UAPSClient_Statics; \
public: \
	DECLARE_CLASS(UAPSClient, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/APSLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UAPSClient)


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAPSClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAPSClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAPSClient(UAPSClient&&); \
	NO_API UAPSClient(const UAPSClient&); \
public:


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAPSClient(UAPSClient&&); \
	NO_API UAPSClient(const UAPSClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAPSClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAPSClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAPSClient)


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_PRIVATE_PROPERTY_OFFSET
#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_23_PROLOG
#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_PRIVATE_PROPERTY_OFFSET \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_SPARSE_DATA \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_RPC_WRAPPERS \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_INCLASS \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_PRIVATE_PROPERTY_OFFSET \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_SPARSE_DATA \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_INCLASS_NO_PURE_DECLS \
	LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APSLIVELINK_API UClass* StaticClass<class UAPSClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LiveProductionUE5_Plugins_APSLiveLink_Source_APSLiveLink_Public_APSClient_h


#define FOREACH_ENUM_SYNCRATES(op) \
	op(FPS_30) \
	op(FPS_15) \
	op(FPS_40) \
	op(FPS_50) \
	op(FPS_60) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
