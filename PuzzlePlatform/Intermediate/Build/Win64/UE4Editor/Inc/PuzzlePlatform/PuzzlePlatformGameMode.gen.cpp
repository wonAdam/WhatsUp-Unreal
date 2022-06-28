// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatform/PuzzlePlatformGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePlatformGameMode() {}
// Cross Module References
	PUZZLEPLATFORM_API UClass* Z_Construct_UClass_APuzzlePlatformGameMode_NoRegister();
	PUZZLEPLATFORM_API UClass* Z_Construct_UClass_APuzzlePlatformGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatform();
// End Cross Module References
	void APuzzlePlatformGameMode::StaticRegisterNativesAPuzzlePlatformGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzlePlatformGameMode_NoRegister()
	{
		return APuzzlePlatformGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APuzzlePlatformGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzlePlatformGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzlePlatformGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PuzzlePlatformGameMode.h" },
		{ "ModuleRelativePath", "PuzzlePlatformGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzlePlatformGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzlePlatformGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuzzlePlatformGameMode_Statics::ClassParams = {
		&APuzzlePlatformGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APuzzlePlatformGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzlePlatformGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzlePlatformGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuzzlePlatformGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzlePlatformGameMode, 1856789488);
	template<> PUZZLEPLATFORM_API UClass* StaticClass<APuzzlePlatformGameMode>()
	{
		return APuzzlePlatformGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzlePlatformGameMode(Z_Construct_UClass_APuzzlePlatformGameMode, &APuzzlePlatformGameMode::StaticClass, TEXT("/Script/PuzzlePlatform"), TEXT("APuzzlePlatformGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzlePlatformGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
