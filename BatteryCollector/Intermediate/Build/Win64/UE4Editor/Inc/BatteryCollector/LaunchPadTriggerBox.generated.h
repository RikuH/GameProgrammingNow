// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BATTERYCOLLECTOR_LaunchPadTriggerBox_generated_h
#error "LaunchPadTriggerBox.generated.h already included, missing '#pragma once' in LaunchPadTriggerBox.h"
#endif
#define BATTERYCOLLECTOR_LaunchPadTriggerBox_generated_h

#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaunchPadTriggerBox(); \
	friend struct Z_Construct_UClass_ALaunchPadTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ALaunchPadTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPadTriggerBox)


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALaunchPadTriggerBox(); \
	friend struct Z_Construct_UClass_ALaunchPadTriggerBox_Statics; \
public: \
	DECLARE_CLASS(ALaunchPadTriggerBox, ATriggerBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ALaunchPadTriggerBox)


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALaunchPadTriggerBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALaunchPadTriggerBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPadTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPadTriggerBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPadTriggerBox(ALaunchPadTriggerBox&&); \
	NO_API ALaunchPadTriggerBox(const ALaunchPadTriggerBox&); \
public:


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALaunchPadTriggerBox(ALaunchPadTriggerBox&&); \
	NO_API ALaunchPadTriggerBox(const ALaunchPadTriggerBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaunchPadTriggerBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaunchPadTriggerBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaunchPadTriggerBox)


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET
#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_12_PROLOG
#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_INCLASS \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ALaunchPadTriggerBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_LaunchPadTriggerBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
