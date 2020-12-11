// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSourceHandle;
#ifdef QTMCONNECTLIVELINK_QTMConnectLiveLinkBlueprint_generated_h
#error "QTMConnectLiveLinkBlueprint.generated.h already included, missing '#pragma once' in QTMConnectLiveLinkBlueprint.h"
#endif
#define QTMCONNECTLIVELINK_QTMConnectLiveLinkBlueprint_generated_h

#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_SPARSE_DATA
#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateQTMConnectLiveLinkSource) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IpAddress); \
		P_GET_UBOOL(Z_Param_AutoDiscover); \
		P_GET_UBOOL(Z_Param_Stream3d); \
		P_GET_UBOOL(Z_Param_Stream6d); \
		P_GET_UBOOL(Z_Param_StreamSkeleton); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StreamRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FrequencyValue); \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UQTMConnectLiveLinkBlueprint::CreateQTMConnectLiveLinkSource(Z_Param_IpAddress,Z_Param_AutoDiscover,Z_Param_Stream3d,Z_Param_Stream6d,Z_Param_StreamSkeleton,Z_Param_StreamRate,Z_Param_FrequencyValue,Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	}


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateQTMConnectLiveLinkSource) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IpAddress); \
		P_GET_UBOOL(Z_Param_AutoDiscover); \
		P_GET_UBOOL(Z_Param_Stream3d); \
		P_GET_UBOOL(Z_Param_Stream6d); \
		P_GET_UBOOL(Z_Param_StreamSkeleton); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StreamRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FrequencyValue); \
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_SourceHandle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UQTMConnectLiveLinkBlueprint::CreateQTMConnectLiveLinkSource(Z_Param_IpAddress,Z_Param_AutoDiscover,Z_Param_Stream3d,Z_Param_Stream6d,Z_Param_StreamSkeleton,Z_Param_StreamRate,Z_Param_FrequencyValue,Z_Param_Out_SourceHandle); \
		P_NATIVE_END; \
	}


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQTMConnectLiveLinkBlueprint(); \
	friend struct Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics; \
public: \
	DECLARE_CLASS(UQTMConnectLiveLinkBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTMConnectLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UQTMConnectLiveLinkBlueprint)


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUQTMConnectLiveLinkBlueprint(); \
	friend struct Z_Construct_UClass_UQTMConnectLiveLinkBlueprint_Statics; \
public: \
	DECLARE_CLASS(UQTMConnectLiveLinkBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTMConnectLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UQTMConnectLiveLinkBlueprint)


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQTMConnectLiveLinkBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQTMConnectLiveLinkBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQTMConnectLiveLinkBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQTMConnectLiveLinkBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQTMConnectLiveLinkBlueprint(UQTMConnectLiveLinkBlueprint&&); \
	NO_API UQTMConnectLiveLinkBlueprint(const UQTMConnectLiveLinkBlueprint&); \
public:


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQTMConnectLiveLinkBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQTMConnectLiveLinkBlueprint(UQTMConnectLiveLinkBlueprint&&); \
	NO_API UQTMConnectLiveLinkBlueprint(const UQTMConnectLiveLinkBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQTMConnectLiveLinkBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQTMConnectLiveLinkBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQTMConnectLiveLinkBlueprint)


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_PRIVATE_PROPERTY_OFFSET
#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_10_PROLOG
#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_PRIVATE_PROPERTY_OFFSET \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_SPARSE_DATA \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_RPC_WRAPPERS \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_INCLASS \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_PRIVATE_PROPERTY_OFFSET \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_SPARSE_DATA \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_INCLASS_NO_PURE_DECLS \
	_TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTMCONNECTLIVELINK_API UClass* StaticClass<class UQTMConnectLiveLinkBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID _TempFolder__build_QTMConnectLiveLink_HostProject_Plugins_QTMConnectLiveLink_Source_QTMConnectLiveLink_Public_QTMConnectLiveLinkBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
