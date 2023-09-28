// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class LITTLE_WARRIOR_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:

	AEnemyController();

private:

	//Blackboard for the enemy
	UPROPERTY(BlueprintReadWrite, Category = "AI Behaviour", meta = (AllowPrivateAccess = "true"))
		class UBlackboardComponent* _blackboardComponent;

	//B
	UPROPERTY(BlueprintReadWrite, Category = "AI Behaviour", meta = (AllowPrivateAccess = "true"))
		class UBehaviorTreeComponent* _behaviourTree;

public:

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UBlackboardComponent* GetBlackboard() const { return _blackboardComponent; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UBehaviorTreeComponent* GetBehaviourTree() const { return _behaviourTree; }

};
