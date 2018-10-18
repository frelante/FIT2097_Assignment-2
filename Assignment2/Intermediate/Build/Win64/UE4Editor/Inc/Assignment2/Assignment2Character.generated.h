// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT2_Assignment2Character_generated_h
#error "Assignment2Character.generated.h already included, missing '#pragma once' in Assignment2Character.h"
#endif
#define ASSIGNMENT2_Assignment2Character_generated_h

#define Assignment2_Source_Assignment2_Assignment2Character_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignment2Character(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AAssignment2Character(); \
public: \
	DECLARE_CLASS(AAssignment2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AAssignment2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAssignment2Character(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AAssignment2Character(); \
public: \
	DECLARE_CLASS(AAssignment2Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AAssignment2Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAssignment2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssignment2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignment2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssignment2Character(AAssignment2Character&&); \
	NO_API AAssignment2Character(const AAssignment2Character&); \
public:


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAssignment2Character(AAssignment2Character&&); \
	NO_API AAssignment2Character(const AAssignment2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignment2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignment2Character)


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AAssignment2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AAssignment2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AAssignment2Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AAssignment2Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AAssignment2Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AAssignment2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AAssignment2Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AAssignment2Character, L_MotionController); }


#define Assignment2_Source_Assignment2_Assignment2Character_h_12_PROLOG
#define Assignment2_Source_Assignment2_Assignment2Character_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_INCLASS \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_Assignment2Character_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Assignment2Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_Assignment2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
