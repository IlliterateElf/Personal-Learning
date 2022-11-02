// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GROUNDUP_MyFPSCharacter_generated_h
#error "MyFPSCharacter.generated.h already included, missing '#pragma once' in MyFPSCharacter.h"
#endif
#define GROUNDUP_MyFPSCharacter_generated_h

#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_SPARSE_DATA
#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_RPC_WRAPPERS
#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFPSCharacter(); \
	friend struct Z_Construct_UClass_AMyFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSCharacter)


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyFPSCharacter(); \
	friend struct Z_Construct_UClass_AMyFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(AMyFPSCharacter)


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSCharacter(AMyFPSCharacter&&); \
	NO_API AMyFPSCharacter(const AMyFPSCharacter&); \
public:


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFPSCharacter(AMyFPSCharacter&&); \
	NO_API AMyFPSCharacter(const AMyFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFPSCharacter)


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cam() { return STRUCT_OFFSET(AMyFPSCharacter, cam); }


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_11_PROLOG
#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_SPARSE_DATA \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_RPC_WRAPPERS \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_INCLASS \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GroundUp_Source_GroundUp_MyFPSCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_SPARSE_DATA \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_INCLASS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_MyFPSCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUNDUP_API UClass* StaticClass<class AMyFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GroundUp_Source_GroundUp_MyFPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
