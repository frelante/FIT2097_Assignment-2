// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ASSIGNMENT2_Damagefire_generated_h
#error "Damagefire.generated.h already included, missing '#pragma once' in Damagefire.h"
#endif
#define ASSIGNMENT2_Damagefire_generated_h

#define Assignment2_Source_Assignment2_Damagefire_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyFireDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFireDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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
	}


#define Assignment2_Source_Assignment2_Damagefire_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyFireDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyFireDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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
	}


#define Assignment2_Source_Assignment2_Damagefire_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADamagefire(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_ADamagefire(); \
public: \
	DECLARE_CLASS(ADamagefire, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(ADamagefire) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Damagefire_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADamagefire(); \
	friend ASSIGNMENT2_API class UClass* Z_Construct_UClass_ADamagefire(); \
public: \
	DECLARE_CLASS(ADamagefire, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Assignment2"), NO_API) \
	DECLARE_SERIALIZER(ADamagefire) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Assignment2_Source_Assignment2_Damagefire_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADamagefire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADamagefire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamagefire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamagefire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamagefire(ADamagefire&&); \
	NO_API ADamagefire(const ADamagefire&); \
public:


#define Assignment2_Source_Assignment2_Damagefire_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADamagefire(ADamagefire&&); \
	NO_API ADamagefire(const ADamagefire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADamagefire); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADamagefire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADamagefire)


#define Assignment2_Source_Assignment2_Damagefire_h_15_PRIVATE_PROPERTY_OFFSET
#define Assignment2_Source_Assignment2_Damagefire_h_12_PROLOG
#define Assignment2_Source_Assignment2_Damagefire_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Damagefire_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Damagefire_h_15_RPC_WRAPPERS \
	Assignment2_Source_Assignment2_Damagefire_h_15_INCLASS \
	Assignment2_Source_Assignment2_Damagefire_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment2_Source_Assignment2_Damagefire_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment2_Source_Assignment2_Damagefire_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment2_Source_Assignment2_Damagefire_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Damagefire_h_15_INCLASS_NO_PURE_DECLS \
	Assignment2_Source_Assignment2_Damagefire_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment2_Source_Assignment2_Damagefire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
