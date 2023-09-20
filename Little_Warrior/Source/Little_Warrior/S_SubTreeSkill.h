// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_SubTreeSkill.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_SubTreeSkill
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ASkillBase* _skillClass;

	FS_SubTreeSkill();
	~FS_SubTreeSkill();
};
