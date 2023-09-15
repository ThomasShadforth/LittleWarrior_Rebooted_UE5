// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/Little_WarriorGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLittle_WarriorGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ALittle_WarriorGameModeBase();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ALittle_WarriorGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	void ALittle_WarriorGameModeBase::StaticRegisterNativesALittle_WarriorGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALittle_WarriorGameModeBase);
	UClass* Z_Construct_UClass_ALittle_WarriorGameModeBase_NoRegister()
	{
		return ALittle_WarriorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Little_WarriorGameModeBase.h" },
		{ "ModuleRelativePath", "Little_WarriorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALittle_WarriorGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::ClassParams = {
		&ALittle_WarriorGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALittle_WarriorGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ALittle_WarriorGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALittle_WarriorGameModeBase.OuterSingleton, Z_Construct_UClass_ALittle_WarriorGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALittle_WarriorGameModeBase.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<ALittle_WarriorGameModeBase>()
	{
		return ALittle_WarriorGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALittle_WarriorGameModeBase);
	ALittle_WarriorGameModeBase::~ALittle_WarriorGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Little_Warrior_Source_Little_Warrior_Little_WarriorGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Little_Warrior_Source_Little_Warrior_Little_WarriorGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALittle_WarriorGameModeBase, ALittle_WarriorGameModeBase::StaticClass, TEXT("ALittle_WarriorGameModeBase"), &Z_Registration_Info_UClass_ALittle_WarriorGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALittle_WarriorGameModeBase), 2987339304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Little_Warrior_Source_Little_Warrior_Little_WarriorGameModeBase_h_2722879974(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Little_Warrior_Source_Little_Warrior_Little_WarriorGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Little_Warrior_Source_Little_Warrior_Little_WarriorGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
