// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollaBall/RollaBallGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollaBallGameModeBase() {}
// Cross Module References
	ROLLABALL_API UClass* Z_Construct_UClass_ARollaBallGameModeBase_NoRegister();
	ROLLABALL_API UClass* Z_Construct_UClass_ARollaBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RollaBall();
// End Cross Module References
	void ARollaBallGameModeBase::StaticRegisterNativesARollaBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARollaBallGameModeBase_NoRegister()
	{
		return ARollaBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARollaBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollaBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RollaBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RollaBallGameModeBase.h" },
		{ "ModuleRelativePath", "RollaBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollaBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollaBallGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARollaBallGameModeBase_Statics::ClassParams = {
		&ARollaBallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARollaBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollaBallGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARollaBallGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARollaBallGameModeBase, 3325669449);
	template<> ROLLABALL_API UClass* StaticClass<ARollaBallGameModeBase>()
	{
		return ARollaBallGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARollaBallGameModeBase(Z_Construct_UClass_ARollaBallGameModeBase, &ARollaBallGameModeBase::StaticClass, TEXT("/Script/RollaBall"), TEXT("ARollaBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollaBallGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
