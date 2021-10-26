// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYFIRSTGAME_MyFirstGameCharacter_generated_h
#error "MyFirstGameCharacter.generated.h already included, missing '#pragma once' in MyFirstGameCharacter.h"
#endif
#define MYFIRSTGAME_MyFirstGameCharacter_generated_h

#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_SPARSE_DATA
#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_RPC_WRAPPERS
#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFirstGameCharacter(); \
	friend struct Z_Construct_UClass_AMyFirstGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstGameCharacter)


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyFirstGameCharacter(); \
	friend struct Z_Construct_UClass_AMyFirstGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyFirstGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstGameCharacter)


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFirstGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFirstGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstGameCharacter(AMyFirstGameCharacter&&); \
	NO_API AMyFirstGameCharacter(const AMyFirstGameCharacter&); \
public:


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstGameCharacter(AMyFirstGameCharacter&&); \
	NO_API AMyFirstGameCharacter(const AMyFirstGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFirstGameCharacter)


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyFirstGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyFirstGameCharacter, FollowCamera); }


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_9_PROLOG
#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_RPC_WRAPPERS \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_INCLASS \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTGAME_API UClass* StaticClass<class AMyFirstGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFirstGame_Source_MyFirstGame_MyFirstGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
