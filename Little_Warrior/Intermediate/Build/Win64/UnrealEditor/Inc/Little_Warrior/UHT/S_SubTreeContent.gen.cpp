// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_SubTreeContent.h"
#include "Little_Warrior/S_SubTreeConnection.h"
#include "Little_Warrior/S_SubTreeSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_SubTreeContent() {}
// Cross Module References
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeConnection();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeContent();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeSkill();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_SubTreeContent;
class UScriptStruct* FS_SubTreeContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_SubTreeContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_SubTreeContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_SubTreeContent, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_SubTreeContent"));
	}
	return Z_Registration_Info_UScriptStruct_S_SubTreeContent.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_SubTreeContent>()
{
	return FS_SubTreeContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_SubTreeContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp__skills_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__skills_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__skills;
		static const UECodeGen_Private::FStructPropertyParams NewProp__connections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__connections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__connections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_SubTreeContent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_SubTreeContent>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills_Inner = { "_skills", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FS_SubTreeSkill, METADATA_PARAMS(nullptr, 0) }; // 3657966739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills_MetaData[] = {
		{ "Category", "S_SubTreeContent" },
		{ "ModuleRelativePath", "S_SubTreeContent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills = { "_skills", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SubTreeContent, _skills), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills_MetaData)) }; // 3657966739
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections_Inner = { "_connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FS_SubTreeConnection, METADATA_PARAMS(nullptr, 0) }; // 2638153883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections_MetaData[] = {
		{ "Category", "S_SubTreeContent" },
		{ "ModuleRelativePath", "S_SubTreeContent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections = { "_connections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_SubTreeContent, _connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections_MetaData)) }; // 2638153883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__skills,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewProp__connections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_SubTreeContent",
		sizeof(FS_SubTreeContent),
		alignof(FS_SubTreeContent),
		Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeContent()
	{
		if (!Z_Registration_Info_UScriptStruct_S_SubTreeContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_SubTreeContent.InnerSingleton, Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_SubTreeContent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeContent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeContent_h_Statics::ScriptStructInfo[] = {
		{ FS_SubTreeContent::StaticStruct, Z_Construct_UScriptStruct_FS_SubTreeContent_Statics::NewStructOps, TEXT("S_SubTreeContent"), &Z_Registration_Info_UScriptStruct_S_SubTreeContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_SubTreeContent), 1454749158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeContent_h_4069951019(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeContent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_SubTreeContent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
