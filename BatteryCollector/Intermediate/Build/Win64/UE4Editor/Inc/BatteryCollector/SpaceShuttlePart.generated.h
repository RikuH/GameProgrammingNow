// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_SpaceShuttlePart_generated_h
#error "SpaceShuttlePart.generated.h already included, missing '#pragma once' in SpaceShuttlePart.h"
#endif
#define BATTERYCOLLECTOR_SpaceShuttlePart_generated_h

#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_RPC_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceShuttlePart(); \
	friend struct Z_Construct_UClass_ASpaceShuttlePart_Statics; \
public: \
	DECLARE_CLASS(ASpaceShuttlePart, APickup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShuttlePart)


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpaceShuttlePart(); \
	friend struct Z_Construct_UClass_ASpaceShuttlePart_Statics; \
public: \
	DECLARE_CLASS(ASpaceShuttlePart, APickup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShuttlePart)


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceShuttlePart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceShuttlePart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShuttlePart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShuttlePart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShuttlePart(ASpaceShuttlePart&&); \
	NO_API ASpaceShuttlePart(const ASpaceShuttlePart&); \
public:


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShuttlePart(ASpaceShuttlePart&&); \
	NO_API ASpaceShuttlePart(const ASpaceShuttlePart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShuttlePart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShuttlePart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpaceShuttlePart)


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PartWeight() { return STRUCT_OFFSET(ASpaceShuttlePart, PartWeight); } \
	FORCEINLINE static uint32 __PPO__isDestroyable() { return STRUCT_OFFSET(ASpaceShuttlePart, isDestroyable); }


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_12_PROLOG
#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_INCLASS \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECTOR_API UClass* StaticClass<class ASpaceShuttlePart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_SpaceShuttlePart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
