// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT2_MyNewActor_generated_h
#error "MyNewActor.generated.h already included, missing '#pragma once' in MyNewActor.h"
#endif
#define ASSIGNMENT2_MyNewActor_generated_h

#define Assignment2_Source_Assignment2_MyNewActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_NewState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_MyNewActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setActive(Z_Param_NewState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsActive(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_MyNewActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyNewActor(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AMyNewActor(); \
public: \
	DECLARE_CLASS(AMyNewActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AMyNewActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_MyNewActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyNewActor(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AMyNewActor(); \
public: \
	DECLARE_CLASS(AMyNewActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AMyNewActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_MyNewActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyNewActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyNewActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNewActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNewActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNewActor(AMyNewActor&&); \
	NO_API AMyNewActor(const AMyNewActor&); \
public:


#define Assignment2_Source_Assignment2_MyNewActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyNewActor(AMyNewActor&&); \
	NO_API AMyNewActor(const AMyNewActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyNewActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyNewActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyNewActor)


#define Assignment2_Source_Assignment2_MyNewActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(AMyNewActor, bIsActive); }


#define Assignment2_Source_Assignment2_MyNewActor_h_9_PROLOG
#define Assignment2_Source_Assignment2_MyNewActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_MyNewActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_MyNewActor_h_12_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_MyNewActor_h_12_INCLASS \
	Assignment2_Source_Assignment2_MyNewActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_MyNewActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_MyNewActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_MyNewActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_MyNewActor_h_12_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_MyNewActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_MyNewActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
