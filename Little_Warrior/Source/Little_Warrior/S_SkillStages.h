// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_SkillStages.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_SkillStages
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int _requiredLevel;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class ASkillBase>> _requiredSkills;

	FS_SkillStages();
	~FS_SkillStages();
};
