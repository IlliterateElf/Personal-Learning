// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GROUNDUP_BaseGun_generated_h
#error "BaseGun.generated.h already included, missing '#pragma once' in BaseGun.h"
#endif
#define GROUNDUP_BaseGun_generated_h

#define GroundUp_Source_GroundUp_BaseGun_h_15_SPARSE_DATA
#define GroundUp_Source_GroundUp_BaseGun_h_15_RPC_WRAPPERS
#define GroundUp_Source_GroundUp_BaseGun_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define GroundUp_Source_GroundUp_BaseGun_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun)


#define GroundUp_Source_GroundUp_BaseGun_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseGun(); \
	friend struct Z_Construct_UClass_ABaseGun_Statics; \
public: \
	DECLARE_CLASS(ABaseGun, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GroundUp"), NO_API) \
	DECLARE_SERIALIZER(ABaseGun)


#define GroundUp_Source_GroundUp_BaseGun_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public:


#define GroundUp_Source_GroundUp_BaseGun_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGun(ABaseGun&&); \
	NO_API ABaseGun(const ABaseGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGun)


#define GroundUp_Source_GroundUp_BaseGun_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GunMesh() { return STRUCT_OFFSET(ABaseGun, GunMesh); }


#define GroundUp_Source_GroundUp_BaseGun_h_12_PROLOG
#define GroundUp_Source_GroundUp_BaseGun_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_BaseGun_h_15_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_BaseGun_h_15_SPARSE_DATA \
	GroundUp_Source_GroundUp_BaseGun_h_15_RPC_WRAPPERS \
	GroundUp_Source_GroundUp_BaseGun_h_15_INCLASS \
	GroundUp_Source_GroundUp_BaseGun_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GroundUp_Source_GroundUp_BaseGun_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GroundUp_Source_GroundUp_BaseGun_h_15_PRIVATE_PROPERTY_OFFSET \
	GroundUp_Source_GroundUp_BaseGun_h_15_SPARSE_DATA \
	GroundUp_Source_GroundUp_BaseGun_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_BaseGun_h_15_INCLASS_NO_PURE_DECLS \
	GroundUp_Source_GroundUp_BaseGun_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GROUNDUP_API UClass* StaticClass<class ABaseGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GroundUp_Source_GroundUp_BaseGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
