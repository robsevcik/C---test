// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTGAME_Fred_gamemode_generated_h
#error "Fred_gamemode.generated.h already included, missing '#pragma once' in Fred_gamemode.h"
#endif
#define MYFIRSTGAME_Fred_gamemode_generated_h

#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_SPARSE_DATA
#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_RPC_WRAPPERS
#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFred_gamemode(); \
	friend struct Z_Construct_UClass_AFred_gamemode_Statics; \
public: \
	DECLARE_CLASS(AFred_gamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFred_gamemode)


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFred_gamemode(); \
	friend struct Z_Construct_UClass_AFred_gamemode_Statics; \
public: \
	DECLARE_CLASS(AFred_gamemode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFred_gamemode)


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFred_gamemode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFred_gamemode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFred_gamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFred_gamemode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFred_gamemode(AFred_gamemode&&); \
	NO_API AFred_gamemode(const AFred_gamemode&); \
public:


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFred_gamemode(AFred_gamemode&&); \
	NO_API AFred_gamemode(const AFred_gamemode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFred_gamemode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFred_gamemode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFred_gamemode)


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerRecharge() { return STRUCT_OFFSET(AFred_gamemode, PlayerRecharge); } \
	FORCEINLINE static uint32 __PPO__Spawn_x_min() { return STRUCT_OFFSET(AFred_gamemode, Spawn_x_min); } \
	FORCEINLINE static uint32 __PPO__Spawn_x_max() { return STRUCT_OFFSET(AFred_gamemode, Spawn_x_max); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_min() { return STRUCT_OFFSET(AFred_gamemode, Spawn_Y_min); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_max() { return STRUCT_OFFSET(AFred_gamemode, Spawn_Y_max); }


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_12_PROLOG
#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_RPC_WRAPPERS \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_INCLASS \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_INCLASS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_Fred_gamemode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTGAME_API UClass* StaticClass<class AFred_gamemode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFirstGame_Source_MyFirstGame_Fred_gamemode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
