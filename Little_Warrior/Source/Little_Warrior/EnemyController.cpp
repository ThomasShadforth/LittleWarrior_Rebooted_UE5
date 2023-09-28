// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"

AEnemyController::AEnemyController() {

	_blackboardComponent = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	check(_blackboardComponent);

	_behaviourTree = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviourTreeComp"));

	check(_behaviourTree);

}