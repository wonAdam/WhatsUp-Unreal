// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattleRoyale/BattleRoyaleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleRoyaleGameModeBase() {}
// Cross Module References
	BATTLEROYALE_API UClass* Z_Construct_UClass_ABattleRoyaleGameModeBase_NoRegister();
	BATTLEROYALE_API UClass* Z_Construct_UClass_ABattleRoyaleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BattleRoyale();
// End Cross Module References
	void ABattleRoyaleGameModeBase::StaticRegisterNativesABattleRoyaleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleRoyaleGameModeBase_NoRegister()
	{
		return ABattleRoyaleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BattleRoyale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BattleRoyaleGameModeBase.h" },
		{ "ModuleRelativePath", "BattleRoyaleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleRoyaleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::ClassParams = {
		&ABattleRoyaleGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattleRoyaleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattleRoyaleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleRoyaleGameModeBase, 2879362950);
	template<> BATTLEROYALE_API UClass* StaticClass<ABattleRoyaleGameModeBase>()
	{
		return ABattleRoyaleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleRoyaleGameModeBase(Z_Construct_UClass_ABattleRoyaleGameModeBase, &ABattleRoyaleGameModeBase::StaticClass, TEXT("/Script/BattleRoyale"), TEXT("ABattleRoyaleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleRoyaleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
