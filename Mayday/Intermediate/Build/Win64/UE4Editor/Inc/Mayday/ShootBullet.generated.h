// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
struct FRotator;
class UObject;
#ifdef MAYDAY_ShootBullet_generated_h
#error "ShootBullet.generated.h already included, missing '#pragma once' in ShootBullet.h"
#endif
#define MAYDAY_ShootBullet_generated_h

#define Mayday_Source_Mayday_ShootBullet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShootBullet) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Bullet); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_OBJECT(UObject,Z_Param_RefObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UShootBullet::ShootBullet(Z_Param_Bullet,Z_Param_Location,Z_Param_Rotation,Z_Param_RefObj); \
		P_NATIVE_END; \
	}


#define Mayday_Source_Mayday_ShootBullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShootBullet) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_Bullet); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Rotation); \
		P_GET_OBJECT(UObject,Z_Param_RefObj); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UShootBullet::ShootBullet(Z_Param_Bullet,Z_Param_Location,Z_Param_Rotation,Z_Param_RefObj); \
		P_NATIVE_END; \
	}


#define Mayday_Source_Mayday_ShootBullet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShootBullet(); \
	friend struct Z_Construct_UClass_UShootBullet_Statics; \
public: \
	DECLARE_CLASS(UShootBullet, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mayday"), NO_API) \
	DECLARE_SERIALIZER(UShootBullet)


#define Mayday_Source_Mayday_ShootBullet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUShootBullet(); \
	friend struct Z_Construct_UClass_UShootBullet_Statics; \
public: \
	DECLARE_CLASS(UShootBullet, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mayday"), NO_API) \
	DECLARE_SERIALIZER(UShootBullet)


#define Mayday_Source_Mayday_ShootBullet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShootBullet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootBullet(UShootBullet&&); \
	NO_API UShootBullet(const UShootBullet&); \
public:


#define Mayday_Source_Mayday_ShootBullet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShootBullet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShootBullet(UShootBullet&&); \
	NO_API UShootBullet(const UShootBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShootBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShootBullet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShootBullet)


#define Mayday_Source_Mayday_ShootBullet_h_15_PRIVATE_PROPERTY_OFFSET
#define Mayday_Source_Mayday_ShootBullet_h_12_PROLOG
#define Mayday_Source_Mayday_ShootBullet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mayday_Source_Mayday_ShootBullet_h_15_PRIVATE_PROPERTY_OFFSET \
	Mayday_Source_Mayday_ShootBullet_h_15_RPC_WRAPPERS \
	Mayday_Source_Mayday_ShootBullet_h_15_INCLASS \
	Mayday_Source_Mayday_ShootBullet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mayday_Source_Mayday_ShootBullet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mayday_Source_Mayday_ShootBullet_h_15_PRIVATE_PROPERTY_OFFSET \
	Mayday_Source_Mayday_ShootBullet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mayday_Source_Mayday_ShootBullet_h_15_INCLASS_NO_PURE_DECLS \
	Mayday_Source_Mayday_ShootBullet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAYDAY_API UClass* StaticClass<class UShootBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mayday_Source_Mayday_ShootBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
