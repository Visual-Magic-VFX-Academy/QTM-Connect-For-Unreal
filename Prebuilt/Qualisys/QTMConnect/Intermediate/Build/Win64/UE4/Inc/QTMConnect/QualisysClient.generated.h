// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
class AQualisysClient;
struct FQualisysTrajectoryInfo;
struct FQualisysRigidBodyInfo;
#ifdef QTMCONNECT_QualisysClient_generated_h
#error "QualisysClient.generated.h already included, missing '#pragma once' in QualisysClient.h"
#endif
#define QTMCONNECT_QualisysClient_generated_h

#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQualisysRigidBodyInfo_Statics; \
	QTMCONNECT_API static class UScriptStruct* StaticStruct();


template<> QTMCONNECT_API UScriptStruct* StaticStruct<struct FQualisysRigidBodyInfo>();

#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQualisysTrajectoryInfo_Statics; \
	QTMCONNECT_API static class UScriptStruct* StaticStruct();


template<> QTMCONNECT_API UScriptStruct* StaticStruct<struct FQualisysTrajectoryInfo>();

#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindQualisysClient) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AQualisysClient**)Z_Param__Result=AQualisysClient::FindQualisysClient(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMarkerPosition) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_trajectoryName); \
		P_GET_STRUCT_REF(FQualisysTrajectoryInfo,Z_Param_Out_trajectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMarkerPosition(Z_Param_Out_trajectoryName,Z_Param_Out_trajectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRigidBody) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_rigidBodyName); \
		P_GET_STRUCT_REF(FQualisysRigidBodyInfo,Z_Param_Out_rigidBody); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRigidBody(Z_Param_Out_rigidBodyName,Z_Param_Out_rigidBody); \
		P_NATIVE_END; \
	}


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindQualisysClient) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AQualisysClient**)Z_Param__Result=AQualisysClient::FindQualisysClient(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMarkerPosition) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_trajectoryName); \
		P_GET_STRUCT_REF(FQualisysTrajectoryInfo,Z_Param_Out_trajectory); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetMarkerPosition(Z_Param_Out_trajectoryName,Z_Param_Out_trajectory); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRigidBody) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_rigidBodyName); \
		P_GET_STRUCT_REF(FQualisysRigidBodyInfo,Z_Param_Out_rigidBody); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetRigidBody(Z_Param_Out_rigidBodyName,Z_Param_Out_rigidBody); \
		P_NATIVE_END; \
	}


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQualisysClient(); \
	friend struct Z_Construct_UClass_AQualisysClient_Statics; \
public: \
	DECLARE_CLASS(AQualisysClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTMConnect"), NO_API) \
	DECLARE_SERIALIZER(AQualisysClient)


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_INCLASS \
private: \
	static void StaticRegisterNativesAQualisysClient(); \
	friend struct Z_Construct_UClass_AQualisysClient_Statics; \
public: \
	DECLARE_CLASS(AQualisysClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTMConnect"), NO_API) \
	DECLARE_SERIALIZER(AQualisysClient)


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQualisysClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQualisysClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQualisysClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQualisysClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQualisysClient(AQualisysClient&&); \
	NO_API AQualisysClient(const AQualisysClient&); \
public:


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQualisysClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQualisysClient(AQualisysClient&&); \
	NO_API AQualisysClient(const AQualisysClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQualisysClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQualisysClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQualisysClient)


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_PRIVATE_PROPERTY_OFFSET
#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_58_PROLOG
#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_PRIVATE_PROPERTY_OFFSET \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_RPC_WRAPPERS \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_INCLASS \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_PRIVATE_PROPERTY_OFFSET \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_INCLASS_NO_PURE_DECLS \
	_TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class QualisysClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTMCONNECT_API UClass* StaticClass<class AQualisysClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID _TempFolder__build_QTMConnect_HostProject_Plugins_QTMConnect_Source_QTMConnect_Classes_QualisysClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS