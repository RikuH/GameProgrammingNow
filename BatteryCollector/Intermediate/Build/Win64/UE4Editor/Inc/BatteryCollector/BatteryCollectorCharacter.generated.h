// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h
#error "BatteryCollectorCharacter.generated.h already included, missing '#pragma once' in BatteryCollectorCharacter.h"
#endif
#define BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h

#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllPartsCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllPartsCollected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlowDown) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PickedInventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SlowDown(Z_Param_PickedInventoryItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PowerChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_PowerChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectPickups) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CollectPickups(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAllPartsCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AllPartsCollected(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlowDown) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_PickedInventoryItem); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SlowDown(Z_Param_PickedInventoryItem); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdatePower) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PowerChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdatePower(Z_Param_PowerChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInitialPower) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetInitialPower(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_EVENT_PARMS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_CALLBACK_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectorCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryCollectorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public:


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialPower() { return STRUCT_OFFSET(ABatteryCollectorCharacter, InitialPower); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ABatteryCollectorCharacter, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ABatteryCollectorCharacter, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__CharacterPower() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CharacterPower); } \
	FORCEINLINE static uint32 __PPO__isCarrying() { return STRUCT_OFFSET(ABatteryCollectorCharacter, isCarrying); }


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_9_PROLOG \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_EVENT_PARMS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_CALLBACK_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ABatteryCollectorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
