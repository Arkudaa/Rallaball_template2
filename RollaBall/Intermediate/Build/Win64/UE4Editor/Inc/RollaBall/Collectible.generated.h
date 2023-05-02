// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ROLLABALL_Collectible_generated_h
#error "Collectible.generated.h already included, missing '#pragma once' in Collectible.h"
#endif
#define ROLLABALL_Collectible_generated_h

#define RollaBall_Source_RollaBall_Collectible_h_12_SPARSE_DATA
#define RollaBall_Source_RollaBall_Collectible_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define RollaBall_Source_RollaBall_Collectible_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define RollaBall_Source_RollaBall_Collectible_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectible(); \
	friend struct Z_Construct_UClass_ACollectible_Statics; \
public: \
	DECLARE_CLASS(ACollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollaBall"), NO_API) \
	DECLARE_SERIALIZER(ACollectible)


#define RollaBall_Source_RollaBall_Collectible_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACollectible(); \
	friend struct Z_Construct_UClass_ACollectible_Statics; \
public: \
	DECLARE_CLASS(ACollectible, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollaBall"), NO_API) \
	DECLARE_SERIALIZER(ACollectible)


#define RollaBall_Source_RollaBall_Collectible_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectible(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectible) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectible); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectible); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectible(ACollectible&&); \
	NO_API ACollectible(const ACollectible&); \
public:


#define RollaBall_Source_RollaBall_Collectible_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectible(ACollectible&&); \
	NO_API ACollectible(const ACollectible&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectible); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectible); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectible)


#define RollaBall_Source_RollaBall_Collectible_h_12_PRIVATE_PROPERTY_OFFSET
#define RollaBall_Source_RollaBall_Collectible_h_9_PROLOG
#define RollaBall_Source_RollaBall_Collectible_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollaBall_Source_RollaBall_Collectible_h_12_PRIVATE_PROPERTY_OFFSET \
	RollaBall_Source_RollaBall_Collectible_h_12_SPARSE_DATA \
	RollaBall_Source_RollaBall_Collectible_h_12_RPC_WRAPPERS \
	RollaBall_Source_RollaBall_Collectible_h_12_INCLASS \
	RollaBall_Source_RollaBall_Collectible_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RollaBall_Source_RollaBall_Collectible_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollaBall_Source_RollaBall_Collectible_h_12_PRIVATE_PROPERTY_OFFSET \
	RollaBall_Source_RollaBall_Collectible_h_12_SPARSE_DATA \
	RollaBall_Source_RollaBall_Collectible_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RollaBall_Source_RollaBall_Collectible_h_12_INCLASS_NO_PURE_DECLS \
	RollaBall_Source_RollaBall_Collectible_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLABALL_API UClass* StaticClass<class ACollectible>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RollaBall_Source_RollaBall_Collectible_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
