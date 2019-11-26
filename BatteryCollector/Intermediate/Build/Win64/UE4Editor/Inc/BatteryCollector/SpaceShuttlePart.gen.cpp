// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/SpaceShuttlePart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceShuttlePart() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpaceShuttlePart_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpaceShuttlePart();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ASpaceShuttlePart::StaticRegisterNativesASpaceShuttlePart()
	{
	}
	UClass* Z_Construct_UClass_ASpaceShuttlePart_NoRegister()
	{
		return ASpaceShuttlePart::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceShuttlePart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDestroyable_MetaData[];
#endif
		static void NewProp_isDestroyable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDestroyable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceShuttlePart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShuttlePart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpaceShuttlePart.h" },
		{ "ModuleRelativePath", "SpaceShuttlePart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Part" },
		{ "ModuleRelativePath", "SpaceShuttlePart.h" },
	};
#endif
	void Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable_SetBit(void* Obj)
	{
		((ASpaceShuttlePart*)Obj)->isDestroyable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable = { "isDestroyable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpaceShuttlePart), &Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_PartWeight_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Part" },
		{ "ModuleRelativePath", "SpaceShuttlePart.h" },
		{ "ToolTip", "Set the amount of weight the part set to the character" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_PartWeight = { "PartWeight", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpaceShuttlePart, PartWeight), METADATA_PARAMS(Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_PartWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_PartWeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpaceShuttlePart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_isDestroyable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpaceShuttlePart_Statics::NewProp_PartWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceShuttlePart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceShuttlePart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpaceShuttlePart_Statics::ClassParams = {
		&ASpaceShuttlePart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpaceShuttlePart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpaceShuttlePart_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceShuttlePart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpaceShuttlePart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceShuttlePart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpaceShuttlePart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpaceShuttlePart, 2094735477);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ASpaceShuttlePart>()
	{
		return ASpaceShuttlePart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpaceShuttlePart(Z_Construct_UClass_ASpaceShuttlePart, &ASpaceShuttlePart::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ASpaceShuttlePart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceShuttlePart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
