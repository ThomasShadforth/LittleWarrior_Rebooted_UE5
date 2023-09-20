// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/PlayerSkillTreeComponent.h"
#include "Little_Warrior/S_TreeCategory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSkillTreeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerSkillTreeComponent();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_UPlayerSkillTreeComponent_NoRegister();
	LITTLE_WARRIOR_API UScriptStruct* Z_Construct_UScriptStruct_FS_TreeCategory();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	void UPlayerSkillTreeComponent::StaticRegisterNativesUPlayerSkillTreeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerSkillTreeComponent);
	UClass* Z_Construct_UClass_UPlayerSkillTreeComponent_NoRegister()
	{
		return UPlayerSkillTreeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerSkillTreeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__skillPoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp__skillPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp__treeCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__treeCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp__treeCategories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerSkillTreeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "PlayerSkillTreeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__skillPoints_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerSkillTreeComponent" },
		{ "ModuleRelativePath", "PlayerSkillTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__skillPoints = { "_skillPoints", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerSkillTreeComponent, _skillPoints), METADATA_PARAMS(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__skillPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__skillPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories_Inner = { "_treeCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FS_TreeCategory, METADATA_PARAMS(nullptr, 0) }; // 345154906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerSkillTreeComponent" },
		{ "ModuleRelativePath", "PlayerSkillTreeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories = { "_treeCategories", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerSkillTreeComponent, _treeCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories_MetaData)) }; // 345154906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__skillPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::NewProp__treeCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSkillTreeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::ClassParams = {
		&UPlayerSkillTreeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerSkillTreeComponent()
	{
		if (!Z_Registration_Info_UClass_UPlayerSkillTreeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerSkillTreeComponent.OuterSingleton, Z_Construct_UClass_UPlayerSkillTreeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerSkillTreeComponent.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<UPlayerSkillTreeComponent>()
	{
		return UPlayerSkillTreeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSkillTreeComponent);
	UPlayerSkillTreeComponent::~UPlayerSkillTreeComponent() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerSkillTreeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerSkillTreeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerSkillTreeComponent, UPlayerSkillTreeComponent::StaticClass, TEXT("UPlayerSkillTreeComponent"), &Z_Registration_Info_UClass_UPlayerSkillTreeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerSkillTreeComponent), 2660538473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerSkillTreeComponent_h_2805583036(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerSkillTreeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_PlayerSkillTreeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
