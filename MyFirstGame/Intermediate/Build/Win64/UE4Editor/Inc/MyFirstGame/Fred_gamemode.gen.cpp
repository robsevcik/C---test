// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstGame/Fred_gamemode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFred_gamemode() {}
// Cross Module References
	MYFIRSTGAME_API UClass* Z_Construct_UClass_AFred_gamemode_NoRegister();
	MYFIRSTGAME_API UClass* Z_Construct_UClass_AFred_gamemode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyFirstGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void AFred_gamemode::StaticRegisterNativesAFred_gamemode()
	{
	}
	UClass* Z_Construct_UClass_AFred_gamemode_NoRegister()
	{
		return AFred_gamemode::StaticClass();
	}
	struct Z_Construct_UClass_AFred_gamemode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRecharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerRecharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_x_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_x_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_x_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_x_max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawn_Y_max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spawn_Y_max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFred_gamemode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Fred_gamemode.h" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::NewProp_PlayerRecharge_MetaData[] = {
		{ "Category", "Fred_gamemode" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFred_gamemode_Statics::NewProp_PlayerRecharge = { "PlayerRecharge", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFred_gamemode, PlayerRecharge), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_PlayerRecharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_PlayerRecharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_min_MetaData[] = {
		{ "Category", "Fred_gamemode" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_min = { "Spawn_x_min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFred_gamemode, Spawn_x_min), METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_max_MetaData[] = {
		{ "Category", "Fred_gamemode" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_max = { "Spawn_x_max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFred_gamemode, Spawn_x_max), METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_min_MetaData[] = {
		{ "Category", "Fred_gamemode" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_min = { "Spawn_Y_min", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFred_gamemode, Spawn_Y_min), METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_max_MetaData[] = {
		{ "Category", "Fred_gamemode" },
		{ "ModuleRelativePath", "Fred_gamemode.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_max = { "Spawn_Y_max", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFred_gamemode, Spawn_Y_max), METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFred_gamemode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFred_gamemode_Statics::NewProp_PlayerRecharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_x_max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFred_gamemode_Statics::NewProp_Spawn_Y_max,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFred_gamemode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFred_gamemode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFred_gamemode_Statics::ClassParams = {
		&AFred_gamemode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFred_gamemode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFred_gamemode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFred_gamemode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFred_gamemode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFred_gamemode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFred_gamemode, 3926781475);
	template<> MYFIRSTGAME_API UClass* StaticClass<AFred_gamemode>()
	{
		return AFred_gamemode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFred_gamemode(Z_Construct_UClass_AFred_gamemode, &AFred_gamemode::StaticClass, TEXT("/Script/MyFirstGame"), TEXT("AFred_gamemode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFred_gamemode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
