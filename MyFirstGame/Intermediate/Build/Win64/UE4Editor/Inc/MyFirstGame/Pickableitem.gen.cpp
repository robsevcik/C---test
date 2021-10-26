// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyFirstGame/Pickableitem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickableitem() {}
// Cross Module References
	MYFIRSTGAME_API UClass* Z_Construct_UClass_APickableitem_NoRegister();
	MYFIRSTGAME_API UClass* Z_Construct_UClass_APickableitem();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_MyFirstGame();
// End Cross Module References
	void APickableitem::StaticRegisterNativesAPickableitem()
	{
	}
	UClass* Z_Construct_UClass_APickableitem_NoRegister()
	{
		return APickableitem::StaticClass();
	}
	struct Z_Construct_UClass_APickableitem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickableitem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyFirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickableitem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pickableitem.h" },
		{ "ModuleRelativePath", "Pickableitem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickableitem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickableitem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickableitem_Statics::ClassParams = {
		&APickableitem::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickableitem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickableitem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickableitem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickableitem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickableitem, 1901783833);
	template<> MYFIRSTGAME_API UClass* StaticClass<APickableitem>()
	{
		return APickableitem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickableitem(Z_Construct_UClass_APickableitem, &APickableitem::StaticClass, TEXT("/Script/MyFirstGame"), TEXT("APickableitem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickableitem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
