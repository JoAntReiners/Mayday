// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAYDAY_MaydayGameModeBase_generated_h
#error "MaydayGameModeBase.generated.h already included, missing '#pragma once' in MaydayGameModeBase.h"
#endif
#define MAYDAY_MaydayGameModeBase_generated_h

#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_RPC_WRAPPERS
#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaydayGameModeBase(); \
	friend struct Z_Construct_UClass_AMaydayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMaydayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mayday"), NO_API) \
	DECLARE_SERIALIZER(AMaydayGameModeBase)


#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMaydayGameModeBase(); \
	friend struct Z_Construct_UClass_AMaydayGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMaydayGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Mayday"), NO_API) \
	DECLARE_SERIALIZER(AMaydayGameModeBase)


#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaydayGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaydayGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaydayGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaydayGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaydayGameModeBase(AMaydayGameModeBase&&); \
	NO_API AMaydayGameModeBase(const AMaydayGameModeBase&); \
public:


#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaydayGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaydayGameModeBase(AMaydayGameModeBase&&); \
	NO_API AMaydayGameModeBase(const AMaydayGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaydayGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaydayGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaydayGameModeBase)


#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Mayday_Source_Mayday_MaydayGameModeBase_h_12_PROLOG
#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_RPC_WRAPPERS \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_INCLASS \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mayday_Source_Mayday_MaydayGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Mayday_Source_Mayday_MaydayGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYDAY_API UClass* StaticClass<class AMaydayGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mayday_Source_Mayday_MaydayGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
