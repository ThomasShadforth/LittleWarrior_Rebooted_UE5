// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_SkillStages.h"
#include "S_SkillInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_SkillInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* _icon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _description;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FS_SkillStages> _skillStages;

	FS_SkillInfo();
	~FS_SkillInfo();
};
