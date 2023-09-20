// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_SkillStages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_SkillStages() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SkillStages();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_SkillStages;
class UScriptStruct* FS_SkillStages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_SkillStages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_SkillStages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_SkillStages, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_SkillStages"));
	}
	return Z_Registration_Info_UScriptStruct_S_SkillStages.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_SkillStages>()
{
	return FS_SkillStages::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_SkillStages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__requiredLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__requiredLevel;
		static const UECodeGen_Private::FClassPropertyParams NewProp__requiredSkills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__requiredSkills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__requiredSkills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillStages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_SkillStages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_SkillStages>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredLevel_MetaData[] = {
		{ "Category", "S_SkillStages" },
		{ "ModuleRelativePath", "S_SkillStages.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredLevel = { "_requiredLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillStages, _requiredLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredLevel_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills_Inner = { "_requiredSkills", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ASkillBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills_MetaData[] = {
		{ "Category", "S_SkillStages" },
		{ "ModuleRelativePath", "S_SkillStages.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills = { "_requiredSkills", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillStages, _requiredSkills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_SkillStages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewProp__requiredSkills,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_SkillStages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_SkillStages",
		sizeof(FS_SkillStages),
		alignof(FS_SkillStages),
		Z_Construct_UScriptStruct_FS_SkillStages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillStages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillStages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillStages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_SkillStages()
	{
		if (!Z_Registration_Info_UScriptStruct_S_SkillStages.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_SkillStages.InnerSingleton, Z_Construct_UScriptStruct_FS_SkillStages_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_SkillStages.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillStages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillStages_h_Statics::ScriptStructInfo[] = {
		{ FS_SkillStages::StaticStruct, Z_Construct_UScriptStruct_FS_SkillStages_Statics::NewStructOps, TEXT("S_SkillStages"), &Z_Registration_Info_UScriptStruct_S_SkillStages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_SkillStages), 3935119494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillStages_h_1067785503(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillStages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillStages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
