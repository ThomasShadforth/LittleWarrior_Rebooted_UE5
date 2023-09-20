// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_SkillInfo.h"
#include "Little_Warrior/S_SkillStages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_SkillInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SkillInfo();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SkillStages();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_SkillInfo;
class UScriptStruct* FS_SkillInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_SkillInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_SkillInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_SkillInfo, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_SkillInfo"));
	}
	return Z_Registration_Info_UScriptStruct_S_SkillInfo.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_SkillInfo>()
{
	return FS_SkillInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_SkillInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp__name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp__description;
		static const UECodeGen_Private::FStructPropertyParams NewProp__skillStages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__skillStages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__skillStages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_SkillInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_SkillInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__name_MetaData[] = {
		{ "Category", "S_SkillInfo" },
		{ "ModuleRelativePath", "S_SkillInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillInfo, _name), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__icon_MetaData[] = {
		{ "Category", "S_SkillInfo" },
		{ "ModuleRelativePath", "S_SkillInfo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__icon = { "_icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillInfo, _icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__description_MetaData[] = {
		{ "Category", "S_SkillInfo" },
		{ "ModuleRelativePath", "S_SkillInfo.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__description = { "_description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillInfo, _description), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__description_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages_Inner = { "_skillStages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FS_SkillStages, METADATA_PARAMS(nullptr, 0) }; // 3935119494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages_MetaData[] = {
		{ "Category", "S_SkillInfo" },
		{ "ModuleRelativePath", "S_SkillInfo.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages = { "_skillStages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SkillInfo, _skillStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages_MetaData)) }; // 3935119494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_SkillInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewProp__skillStages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_SkillInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_SkillInfo",
		sizeof(FS_SkillInfo),
		alignof(FS_SkillInfo),
		Z_Construct_UScriptStruct_FS_SkillInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SkillInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_SkillInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_S_SkillInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_SkillInfo.InnerSingleton, Z_Construct_UScriptStruct_FS_SkillInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_SkillInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillInfo_h_Statics::ScriptStructInfo[] = {
		{ FS_SkillInfo::StaticStruct, Z_Construct_UScriptStruct_FS_SkillInfo_Statics::NewStructOps, TEXT("S_SkillInfo"), &Z_Registration_Info_UScriptStruct_S_SkillInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_SkillInfo), 4281611953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillInfo_h_1203538336(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SkillInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
