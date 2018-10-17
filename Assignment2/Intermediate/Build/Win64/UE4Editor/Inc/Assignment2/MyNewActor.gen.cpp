// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyNewActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyNewActor() {}
// Cross Module References
	ASSIGNMENT2_API UClass* Z_Construct_UClass_AMyNewActor_NoRegister();
	ASSIGNMENT2_API UClass* Z_Construct_UClass_AMyNewActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Assignment2();
	ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyNewActor_IsActive();
	ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyNewActor_OnRep_IsActive();
	ASSIGNMENT2_API UFunction* Z_Construct_UFunction_AMyNewActor_setActive();
// End Cross Module References
	void AMyNewActor::StaticRegisterNativesAMyNewActor()
	{
		UClass* Class = AMyNewActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActive", &AMyNewActor::execIsActive },
			{ "OnRep_IsActive", &AMyNewActor::execOnRep_IsActive },
			{ "setActive", &AMyNewActor::execsetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AMyNewActor_IsActive()
	{
		struct MyNewActor_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MyNewActor_eventIsActive_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyNewActor_eventIsActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyNewActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNewActor, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(MyNewActor_eventIsActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyNewActor_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyNewActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNewActor, "OnRep_IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMyNewActor_setActive()
	{
		struct MyNewActor_eventsetActive_Parms
		{
			bool NewState;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_NewState_SetBit = [](void* Obj){ ((MyNewActor_eventsetActive_Parms*)Obj)->NewState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewState = { UE4CodeGen_Private::EPropertyClass::Bool, "NewState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MyNewActor_eventsetActive_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_NewState_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewState,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "MyNewActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyNewActor, "setActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MyNewActor_eventsetActive_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyNewActor_NoRegister()
	{
		return AMyNewActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyNewActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Assignment2,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AMyNewActor_IsActive, "IsActive" }, // 4187547407
				{ &Z_Construct_UFunction_AMyNewActor_OnRep_IsActive, "OnRep_IsActive" }, // 449168634
				{ &Z_Construct_UFunction_AMyNewActor_setActive, "setActive" }, // 3532911298
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MyNewActor.h" },
				{ "ModuleRelativePath", "MyNewActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
				{ "ModuleRelativePath", "MyNewActor.h" },
			};
#endif
			auto NewProp_bIsActive_SetBit = [](void* Obj){ ((AMyNewActor*)Obj)->bIsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080100000020, 1, "OnRep_IsActive", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMyNewActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsActive_MetaData, ARRAY_COUNT(NewProp_bIsActive_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsActive,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyNewActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyNewActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyNewActor, 2283197787);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyNewActor(Z_Construct_UClass_AMyNewActor, &AMyNewActor::StaticClass, TEXT("/Script/Assignment2"), TEXT("AMyNewActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyNewActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
