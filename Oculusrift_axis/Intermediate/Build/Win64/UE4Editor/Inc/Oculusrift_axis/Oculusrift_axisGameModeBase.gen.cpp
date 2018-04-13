// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Oculusrift_axisGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusrift_axisGameModeBase() {}
// Cross Module References
	OCULUSRIFT_AXIS_API UClass* Z_Construct_UClass_AOculusrift_axisGameModeBase_NoRegister();
	OCULUSRIFT_AXIS_API UClass* Z_Construct_UClass_AOculusrift_axisGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Oculusrift_axis();
// End Cross Module References
	void AOculusrift_axisGameModeBase::StaticRegisterNativesAOculusrift_axisGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOculusrift_axisGameModeBase_NoRegister()
	{
		return AOculusrift_axisGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AOculusrift_axisGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Oculusrift_axis,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Oculusrift_axisGameModeBase.h" },
				{ "ModuleRelativePath", "Oculusrift_axisGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOculusrift_axisGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOculusrift_axisGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOculusrift_axisGameModeBase, 205575204);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOculusrift_axisGameModeBase(Z_Construct_UClass_AOculusrift_axisGameModeBase, &AOculusrift_axisGameModeBase::StaticClass, TEXT("/Script/Oculusrift_axis"), TEXT("AOculusrift_axisGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOculusrift_axisGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
