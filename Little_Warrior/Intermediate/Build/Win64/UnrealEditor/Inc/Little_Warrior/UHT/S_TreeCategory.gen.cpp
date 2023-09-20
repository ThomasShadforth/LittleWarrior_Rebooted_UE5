// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/S_TreeCategory.h"
#include "Little_Warrior/S_SubTreeContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_TreeCategory() {}
// Cross Module References
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_SubTreeContent();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_TreeCategory();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_TreeCategory;
class UScriptStruct* FS_TreeCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_TreeCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_TreeCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_TreeCategory, Z_Construct_UPackage__Script_Little_Warrior(), TEXT("S_TreeCategory"));
	}
	return Z_Registration_Info_UScriptStruct_S_TreeCategory.OuterSingleton;
}
template<> LITTLE_WARRIOR_API UScriptStruct* StaticStruct<FS_TreeCategory>()
{
	return FS_TreeCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_TreeCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__categoryName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp__categoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__treeContent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__treeContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TreeCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "S_TreeCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_TreeCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__categoryName_MetaData[] = {
		{ "Category", "S_TreeCategory" },
		{ "ModuleRelativePath", "S_TreeCategory.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__categoryName = { "_categoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_TreeCategory, _categoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__categoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__categoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__treeContent_MetaData[] = {
		{ "Category", "S_TreeCategory" },
		{ "ModuleRelativePath", "S_TreeCategory.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__treeContent = { "_treeContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_TreeCategory, _treeContent), Z_Construct_UScriptStruct_FS_SubTreeContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__treeContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__treeContent_MetaData)) }; // 1454749158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_TreeCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__categoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewProp__treeContent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_TreeCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
		nullptr,
		&NewStructOps,
		"S_TreeCategory",
		sizeof(FS_TreeCategory),
		alignof(FS_TreeCategory),
		Z_Construct_UScriptStruct_FS_TreeCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TreeCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_TreeCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_S_TreeCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_TreeCategory.InnerSingleton, Z_Construct_UScriptStruct_FS_TreeCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_TreeCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_TreeCategory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_TreeCategory_h_Statics::ScriptStructInfo[] = {
		{ FS_TreeCategory::StaticStruct, Z_Construct_UScriptStruct_FS_TreeCategory_Statics::NewStructOps, TEXT("S_TreeCategory"), &Z_Registration_Info_UScriptStruct_S_TreeCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_TreeCategory), 345154906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_TreeCategory_h_13009732(TEXT("/Script/Little_Warrior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_TreeCategory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_S_TreeCategory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
