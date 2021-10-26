// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MYFIRSTGAME_Fred_generated_h
#error "Fred.generated.h already included, missing '#pragma once' in Fred.h"
#endif
#define MYFIRSTGAME_Fred_generated_h

#define MyFirstGame_Source_MyFirstGame_Fred_h_23_SPARSE_DATA
#define MyFirstGame_Source_MyFirstGame_Fred_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFred(); \
	friend struct Z_Construct_UClass_AFred_Statics; \
public: \
	DECLARE_CLASS(AFred, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFred)


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAFred(); \
	friend struct Z_Construct_UClass_AFred_Statics; \
public: \
	DECLARE_CLASS(AFred, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyFirstGame"), NO_API) \
	DECLARE_SERIALIZER(AFred)


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFred(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFred) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFred); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFred); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFred(AFred&&); \
	NO_API AFred(const AFred&); \
public:


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFred(AFred&&); \
	NO_API AFred(const AFred&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFred); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFred); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFred)


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_PRIVATE_PROPERTY_OFFSET
#define MyFirstGame_Source_MyFirstGame_Fred_h_20_PROLOG
#define MyFirstGame_Source_MyFirstGame_Fred_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_RPC_WRAPPERS \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_INCLASS \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyFirstGame_Source_MyFirstGame_Fred_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_PRIVATE_PROPERTY_OFFSET \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_SPARSE_DATA \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_INCLASS_NO_PURE_DECLS \
	MyFirstGame_Source_MyFirstGame_Fred_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYFIRSTGAME_API UClass* StaticClass<class AFred>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyFirstGame_Source_MyFirstGame_Fred_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
