// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/SkillBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ASkillBase();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	void ASkillBase::StaticRegisterNativesASkillBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkillBase);
	UClass* Z_Construct_UClass_ASkillBase_NoRegister()
	{
		return ASkillBase::StaticClass();
	}
	struct Z_Construct_UClass_ASkillBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkillBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillBase.h" },
		{ "ModuleRelativePath", "SkillBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkillBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkillBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkillBase_Statics::ClassParams = {
		&ASkillBase::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkillBase()
	{
		if (!Z_Registration_Info_UClass_ASkillBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkillBase.OuterSingleton, Z_Construct_UClass_ASkillBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkillBase.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<ASkillBase>()
	{
		return ASkillBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkillBase);
	ASkillBase::~ASkillBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_SkillBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_SkillBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASkillBase, ASkillBase::StaticClass, TEXT("ASkillBase"), &Z_Registration_Info_UClass_ASkillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkillBase), 3874031260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_SkillBase_h_277426357(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_SkillBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_SkillBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
