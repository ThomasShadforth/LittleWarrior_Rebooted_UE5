// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_SubTreeSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_SubTreeSkill() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeSkill();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_SubTreeSkill;
class UScriptStruct* FS_SubTreeSkill::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_SubTreeSkill.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_SubTreeSkill.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_SubTreeSkill, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_SubTreeSkill"));
	}
	return Z_Registration_Info_UScriptStruct_S_SubTreeSkill.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_SubTreeSkill>()
{
	return FS_SubTreeSkill::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__skillClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__skillClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_SubTreeSkill.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_SubTreeSkill>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__position_MetaData[] = {
		{ "Category", "S_SubTreeSkill" },
		{ "ModuleRelativePath", "S_SubTreeSkill.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__position = { "_position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SubTreeSkill, _position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__skillClass_MetaData[] = {
		{ "Category", "S_SubTreeSkill" },
		{ "ModuleRelativePath", "S_SubTreeSkill.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__skillClass = { "_skillClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SubTreeSkill, _skillClass), Z_Construct_UClass_ASkillBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__skillClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__skillClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewProp__skillClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_SubTreeSkill",
		sizeof(FS_SubTreeSkill),
		alignof(FS_SubTreeSkill),
		Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeSkill()
	{
		if (!Z_Registration_Info_UScriptStruct_S_SubTreeSkill.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_SubTreeSkill.InnerSingleton, Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_SubTreeSkill.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeSkill_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeSkill_h_Statics::ScriptStructInfo[] = {
		{ FS_SubTreeSkill::StaticStruct, Z_Construct_UScriptStruct_FS_SubTreeSkill_Statics::NewStructOps, TEXT("S_SubTreeSkill"), &Z_Registration_Info_UScriptStruct_S_SubTreeSkill, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_SubTreeSkill), 3657966739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeSkill_h_3674527723(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeSkill_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeSkill_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
