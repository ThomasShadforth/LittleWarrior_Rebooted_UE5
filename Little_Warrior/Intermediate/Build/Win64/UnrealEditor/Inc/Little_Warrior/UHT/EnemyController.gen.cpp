// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Little_Warrior/EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_AEnemyController();
	LITTLE_WARRIOR_API UClass* Z_Construct_UClass_AEnemyController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Little_Warrior();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyController::execGetBehaviourTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorTreeComponent**)Z_Param__Result=P_THIS->GetBehaviourTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyController::execGetBlackboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlackboardComponent**)Z_Param__Result=P_THIS->GetBlackboard();
		P_NATIVE_END;
	}
	void AEnemyController::StaticRegisterNativesAEnemyController()
	{
		UClass* Class = AEnemyController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBehaviourTree", &AEnemyController::execGetBehaviourTree },
			{ "GetBlackboard", &AEnemyController::execGetBlackboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics
	{
		struct EnemyController_eventGetBehaviourTree_Parms
		{
			UBehaviorTreeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyController_eventGetBehaviourTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "GetBehaviourTree", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::EnemyController_eventGetBehaviourTree_Parms), Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_GetBehaviourTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_GetBehaviourTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics
	{
		struct EnemyController_eventGetBlackboard_Parms
		{
			UBlackboardComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyController_eventGetBlackboard_Parms, ReturnValue), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyController, nullptr, "GetBlackboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::EnemyController_eventGetBlackboard_Parms), Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyController_GetBlackboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyController_GetBlackboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyController);
	UClass* Z_Construct_UClass_AEnemyController_NoRegister()
	{
		return AEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__blackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__blackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__behaviourTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__behaviourTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Little_Warrior,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyController_GetBehaviourTree, "GetBehaviourTree" }, // 2786154247
		{ &Z_Construct_UFunction_AEnemyController_GetBlackboard, "GetBlackboard" }, // 2254854048
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyController.h" },
		{ "ModuleRelativePath", "EnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp__blackboardComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Behaviour" },
		{ "Comment", "//Blackboard for the enemy\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
		{ "ToolTip", "Blackboard for the enemy" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp__blackboardComponent = { "_blackboardComponent", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyController, _blackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp__blackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp__blackboardComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyController_Statics::NewProp__behaviourTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Behaviour" },
		{ "Comment", "//B\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyController.h" },
		{ "ToolTip", "B" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyController_Statics::NewProp__behaviourTree = { "_behaviourTree", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyController, _behaviourTree), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::NewProp__behaviourTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::NewProp__behaviourTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp__blackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyController_Statics::NewProp__behaviourTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyController_Statics::ClassParams = {
		&AEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyController()
	{
		if (!Z_Registration_Info_UClass_AEnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyController.OuterSingleton, Z_Construct_UClass_AEnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyController.OuterSingleton;
	}
	template<> LITTLE_WARRIOR_API UClass* StaticClass<AEnemyController>()
	{
		return AEnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyController);
	AEnemyController::~AEnemyController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_EnemyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_EnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyController, AEnemyController::StaticClass, TEXT("AEnemyController"), &Z_Registration_Info_UClass_AEnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyController), 2272384352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_EnemyController_h_80396648(TEXT("/Script/Little_Warrior"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_LittleWarrior_Rebooted_UE5_Little_Warrior_Source_Little_Warrior_EnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
