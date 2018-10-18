// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASSIGNMENT2_HealthPack_generated_h
#error "HealthPack.generated.h already included, missing '#pragma once' in HealthPack.h"
#endif
#define ASSIGNMENT2_HealthPack_generated_h

#define Assignment2_Source_Assignment2_HealthPack_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_HealthPack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_HealthPack_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHealthPack(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AHealthPack(); \
public: \
	DECLARE_CLASS(AHealthPack, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AHealthPack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_HealthPack_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHealthPack(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AHealthPack(); \
public: \
	DECLARE_CLASS(AHealthPack, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(AHealthPack) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_HealthPack_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHealthPack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHealthPack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPack(AHealthPack&&); \
	NO_API AHealthPack(const AHealthPack&); \
public:


#define Assignment2_Source_Assignment2_HealthPack_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHealthPack(AHealthPack&&); \
	NO_API AHealthPack(const AHealthPack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHealthPack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHealthPack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHealthPack)


#define Assignment2_Source_Assignment2_HealthPack_h_12_PRIVATE_PROPERTY_OFFSET
#define Assignment2_Source_Assignment2_HealthPack_h_9_PROLOG
#define Assignment2_Source_Assignment2_HealthPack_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_HealthPack_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_HealthPack_h_12_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_HealthPack_h_12_INCLASS \
	Assignment2_Source_Assignment2_HealthPack_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_HealthPack_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_HealthPack_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_HealthPack_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_HealthPack_h_12_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_HealthPack_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_HealthPack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
