// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstGame/MyFirstGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFirstGameGameMode() {}
// Cross Module References
	MYFIRSTGAME_API UClass* Z_Construct_UClass_AMyFirstGameGameMode_NoRegister();
	MYFIRSTGAME_API UClass* Z_Construct_UClass_AMyFirstGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstGame();
// End Cross Module References
	void AMyFirstGameGameMode::StaticRegisterNativesAMyFirstGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyFirstGameGameMode_NoRegister()
	{
		return AMyFirstGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyFirstGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyFirstGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyFirstGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyFirstGameGameMode.h" },
		{ "ModuleRelativePath", "MyFirstGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyFirstGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyFirstGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyFirstGameGameMode_Statics::ClassParams = {
		&AMyFirstGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyFirstGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyFirstGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyFirstGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyFirstGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyFirstGameGameMode, 1670481136);
	template<> MYFIRSTGAME_API UClass* StaticClass<AMyFirstGameGameMode>()
	{
		return AMyFirstGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyFirstGameGameMode(Z_Construct_UClass_AMyFirstGameGameMode, &AMyFirstGameGameMode::StaticClass, TEXT("/Script/MyFirstGame"), TEXT("AMyFirstGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyFirstGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
