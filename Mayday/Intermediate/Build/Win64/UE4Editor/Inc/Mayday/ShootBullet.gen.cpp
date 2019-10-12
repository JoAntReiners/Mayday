// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mayday/ShootBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootBullet() {}
// Cross Module References
	MAYDAY_API UClass* Z_Construct_UClass_UShootBullet_NoRegister();
	MAYDAY_API UClass* Z_Construct_UClass_UShootBullet();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Mayday();
	MAYDAY_API UFunction* Z_Construct_UFunction_UShootBullet_ShootBullet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UShootBullet::StaticRegisterNativesUShootBullet()
	{
		UClass* Class = UShootBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShootBullet", &UShootBullet::execShootBullet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShootBullet_ShootBullet_Statics
	{
		struct ShootBullet_eventShootBullet_Parms
		{
			TSubclassOf<AActor>  Bullet;
			FVector Location;
			FRotator Rotation;
			UObject* RefObj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RefObj;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Bullet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_RefObj = { "RefObj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootBullet_eventShootBullet_Parms, RefObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootBullet_eventShootBullet_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootBullet_eventShootBullet_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootBullet_eventShootBullet_Parms, Bullet), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_RefObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::NewProp_Bullet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootBullet.h" },
		{ "worldContext", "RefObj" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShootBullet, nullptr, "ShootBullet", sizeof(ShootBullet_eventShootBullet_Parms), Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04842401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShootBullet_ShootBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShootBullet_ShootBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShootBullet_NoRegister()
	{
		return UShootBullet::StaticClass();
	}
	struct Z_Construct_UClass_UShootBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Mayday,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShootBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShootBullet_ShootBullet, "ShootBullet" }, // 2392679749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShootBullet.h" },
		{ "ModuleRelativePath", "ShootBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShootBullet_Statics::ClassParams = {
		&UShootBullet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShootBullet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UShootBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShootBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShootBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShootBullet, 2281168023);
	template<> MAYDAY_API UClass* StaticClass<UShootBullet>()
	{
		return UShootBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShootBullet(Z_Construct_UClass_UShootBullet, &UShootBullet::StaticClass, TEXT("/Script/Mayday"), TEXT("UShootBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
