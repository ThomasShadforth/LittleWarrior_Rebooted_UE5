// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Slate/WidgetTransform.h"
#include "S_SubTreeConnection.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct LITTLE_WARRIOR_API FS_SubTreeConnection
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FWidgetTransform _widgetTransform;

	FS_SubTreeConnection();
	~FS_SubTreeConnection();
};
