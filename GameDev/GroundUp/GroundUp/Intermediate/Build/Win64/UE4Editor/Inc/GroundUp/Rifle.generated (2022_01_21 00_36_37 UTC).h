// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GROUNDUP_Rifle_generated_h
#error "Rifle.generated.h already included, missing '#pragma once' in Rifle.h"
#endif
#define GROUNDUP_Rifle_generated_h

#define GroundUp_Source_GroundUp_Rifle_h_12_SPARSE_DATA
#define GroundUp_Source_GroundUp_Rifle_h_12_RPC_WRAPPERS
#define GroundUp_Source_GroundUp_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GroundUp_Source_GroundUp_Rifle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, ABaseGun, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define GroundUp_Source_GroundUp_Rifle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, ABaseGun, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define GroundUp_Source_GroundUp_Rifle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public:


#define GroundUp_Source_GroundUp_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifle)


#define GroundUp_Source_GroundUp_Rifle_h_12_PRIVATE_PROPERTY_OFFSET
#define GroundUp_Source_GroundUp_Rifle_h_9_PROLOG
#define GroundUp_Source_GroundUp_Rifle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_Rifle_h_12_SPARSE_DATA \
	GroundUp_Source_GroundUp_Rifle_h_12_RPC_WRAPPERS \
	GroundUp_Source_GroundUp_Rifle_h_12_INCLASS \
	GroundUp_Source_GroundUp_Rifle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GroundUp_Source_GroundUp_Rifle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_Rifle_h_12_SPARSE_DATA \
	GroundUp_Source_GroundUp_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_Rifle_h_12_INCLASS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUNDUP_API UClass* StaticClass<class ARifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GroundUp_Source_GroundUp_Rifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
