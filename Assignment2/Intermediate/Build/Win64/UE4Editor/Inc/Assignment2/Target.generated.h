// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT2_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define ASSIGNMENT2_Target_generated_h

#define Assignment2_Source_Assignment2_Target_h_12_RPC_WRAPPERS
#define Assignment2_Source_Assignment2_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Assignment2_Source_Assignment2_Target_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_ATarget(); \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(ATarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Target_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_ATarget(); \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(ATarget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Target_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define Assignment2_Source_Assignment2_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define Assignment2_Source_Assignment2_Target_h_12_PRIVATE_PROPERTY_OFFSET
#define Assignment2_Source_Assignment2_Target_h_9_PROLOG
#define Assignment2_Source_Assignment2_Target_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Target_h_12_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_Target_h_12_INCLASS \
	Assignment2_Source_Assignment2_Target_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_Target_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Target_h_12_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
