// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollector/LaunchPadTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPadTriggerBox() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ALaunchPadTriggerBox_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ALaunchPadTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd();
// End Cross Module References
	void ALaunchPadTriggerBox::StaticRegisterNativesALaunchPadTriggerBox()
	{
		UClass* Class = ALaunchPadTriggerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ALaunchPadTriggerBox::execOnOverlapBegin },
			{ "OnOverlapEnd", &ALaunchPadTriggerBox::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics
	{
		struct LaunchPadTriggerBox_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LaunchPadTriggerBox_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LaunchPadTriggerBox_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LaunchPadTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaunchPadTriggerBox, nullptr, "OnOverlapBegin", sizeof(LaunchPadTriggerBox_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics
	{
		struct LaunchPadTriggerBox_eventOnOverlapEnd_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LaunchPadTriggerBox_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LaunchPadTriggerBox_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LaunchPadTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALaunchPadTriggerBox, nullptr, "OnOverlapEnd", sizeof(LaunchPadTriggerBox_eventOnOverlapEnd_Parms), Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALaunchPadTriggerBox_NoRegister()
	{
		return ALaunchPadTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ALaunchPadTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaunchPadTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALaunchPadTriggerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapBegin, "OnOverlapBegin" }, // 2119360314
		{ &Z_Construct_UFunction_ALaunchPadTriggerBox_OnOverlapEnd, "OnOverlapEnd" }, // 351209289
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPadTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LaunchPadTriggerBox.h" },
		{ "ModuleRelativePath", "LaunchPadTriggerBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaunchPadTriggerBox_Statics::NewProp_SpecificActor_MetaData[] = {
		{ "Category", "LaunchPadTriggerBox" },
		{ "ModuleRelativePath", "LaunchPadTriggerBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaunchPadTriggerBox_Statics::NewProp_SpecificActor = { "SpecificActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALaunchPadTriggerBox, SpecificActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALaunchPadTriggerBox_Statics::NewProp_SpecificActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALaunchPadTriggerBox_Statics::NewProp_SpecificActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaunchPadTriggerBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaunchPadTriggerBox_Statics::NewProp_SpecificActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaunchPadTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaunchPadTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaunchPadTriggerBox_Statics::ClassParams = {
		&ALaunchPadTriggerBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALaunchPadTriggerBox_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ALaunchPadTriggerBox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALaunchPadTriggerBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALaunchPadTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaunchPadTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaunchPadTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaunchPadTriggerBox, 379744547);
	template<> BATTERYCOLLECTOR_API UClass* StaticClass<ALaunchPadTriggerBox>()
	{
		return ALaunchPadTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaunchPadTriggerBox(Z_Construct_UClass_ALaunchPadTriggerBox, &ALaunchPadTriggerBox::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ALaunchPadTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaunchPadTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
