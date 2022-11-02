// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroundUp/Rifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle() {}
// Cross Module References
	GROUNDUP_API UClass* Z_Construct_UClass_ARifle_NoRegister();
	GROUNDUP_API UClass* Z_Construct_UClass_ARifle();
	GROUNDUP_API UClass* Z_Construct_UClass_ABaseGun();
	UPackage* Z_Construct_UPackage__Script_GroundUp();
// End Cross Module References
	void ARifle::StaticRegisterNativesARifle()
	{
	}
	UClass* Z_Construct_UClass_ARifle_NoRegister()
	{
		return ARifle::StaticClass();
	}
	struct Z_Construct_UClass_ARifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseGun,
		(UObject* (*)())Z_Construct_UPackage__Script_GroundUp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Rifle.h" },
		{ "ModuleRelativePath", "Rifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARifle_Statics::ClassParams = {
		&ARifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARifle, 3400236092);
	template<> GROUNDUP_API UClass* StaticClass<ARifle>()
	{
		return ARifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARifle(Z_Construct_UClass_ARifle, &ARifle::StaticClass, TEXT("/Script/GroundUp"), TEXT("ARifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
