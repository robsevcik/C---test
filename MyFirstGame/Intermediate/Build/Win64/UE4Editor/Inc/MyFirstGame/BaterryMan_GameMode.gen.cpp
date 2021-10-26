// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstGame/BaterryMan_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaterryMan_GameMode() {}
// Cross Module References
	MYFIRSTGAME_API UClass* Z_Construct_UClass_ABaterryMan_GameMode_NoRegister();
	MYFIRSTGAME_API UClass* Z_Construct_UClass_ABaterryMan_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_MyFirstGame();
// End Cross Module References
	void ABaterryMan_GameMode::StaticRegisterNativesABaterryMan_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ABaterryMan_GameMode_NoRegister()
	{
		return ABaterryMan_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABaterryMan_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaterryMan_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaterryMan_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BaterryMan_GameMode.h" },
		{ "ModuleRelativePath", "BaterryMan_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaterryMan_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaterryMan_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaterryMan_GameMode_Statics::ClassParams = {
		&ABaterryMan_GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABaterryMan_GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaterryMan_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaterryMan_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaterryMan_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaterryMan_GameMode, 1456010168);
	template<> MYFIRSTGAME_API UClass* StaticClass<ABaterryMan_GameMode>()
	{
		return ABaterryMan_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaterryMan_GameMode(Z_Construct_UClass_ABaterryMan_GameMode, &ABaterryMan_GameMode::StaticClass, TEXT("/Script/MyFirstGame"), TEXT("ABaterryMan_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaterryMan_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
