// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamePlayState : int32;
#ifdef ASSIGNMENT2_Assignment2GameMode_generated_h
#error "Assignment2GameMode.generated.h already included, missing '#pragma once' in Assignment2GameMode.h"
#endif
#define ASSIGNMENT2_Assignment2GameMode_generated_h

#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EGamePlayState*)Z_Param__Result=P_THIS->GetCurrentState(); \
		P_NATIVE_END; \
	}


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignment2GameMode(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AAssignment2GameMode(); \
public: \
	DECLARE_CLASS(AAssignment2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Assignment2"), ASSIGNMENT2_API) \
	DECLARE_SERIALIZER(AAssignment2GameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAAssignment2GameMode(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_AAssignment2GameMode(); \
public: \
	DECLARE_CLASS(AAssignment2GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Assignment2"), ASSIGNMENT2_API) \
	DECLARE_SERIALIZER(AAssignment2GameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSIGNMENT2_API AAssignment2GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAssignment2GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSIGNMENT2_API, AAssignment2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment2GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSIGNMENT2_API AAssignment2GameMode(AAssignment2GameMode&&); \
	ASSIGNMENT2_API AAssignment2GameMode(const AAssignment2GameMode&); \
public:


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSIGNMENT2_API AAssignment2GameMode(AAssignment2GameMode&&); \
	ASSIGNMENT2_API AAssignment2GameMode(const AAssignment2GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSIGNMENT2_API, AAssignment2GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignment2GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignment2GameMode)


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_PRIVATE_PROPERTY_OFFSET
#define Assignment2_Source_Assignment2_Assignment2GameMode_h_19_PROLOG
#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_INCLASS \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_Assignment2GameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Assignment2GameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_Assignment2GameMode_h


#define FOREACH_ENUM_EGAMEPLAYSTATE(op) \
	op(EGamePlayState::EPlaying) \
	op(EGamePlayState::EGameOver) \
	op(EGamePlayState::EUnknown) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
