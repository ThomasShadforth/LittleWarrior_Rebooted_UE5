// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCombatComponent.h"

// Sets default values for this component's properties
UPlayerCombatComponent::UPlayerCombatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerCombatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UPlayerCombatComponent::ProcessPlayerLightAttack()
{
	if (_attackDataMap.Num() > 0) {
		if (_currentAttack == nullptr) {
			GetNextAttack("Jab1");
		}
		else {
			GetNextAttack(_currentAttack->_nextLightAttack);
		}
	}
}

void UPlayerCombatComponent::ProcessPlayerHeavyAttack()
{
	if (_attackDataMap.Num() > 0) {
		if (_currentAttack == nullptr) {

		}
		else {
			GetNextAttack(_currentAttack->_nextHeavyAttack);
		}
	}
}

void UPlayerCombatComponent::ResetCurrentAttack()
{
	_currentAttack = nullptr;
}

void UPlayerCombatComponent::GetNextAttack(FName AttackName)
{
	FS_AttackData* requestedAttack = _attackDataMap.Find(AttackName);

	if (requestedAttack) {
		if (requestedAttack->bUnlocked) {
			PlayCharacterAttackAnim(requestedAttack->_attackName);
			_currentAttack = requestedAttack;
		}
	}
}

void UPlayerCombatComponent::UnlockPlayerAttack(FName AttackName)
{
	
	UE_LOG(LogTemp, Warning, TEXT("CHECKING FOR ATTACK"));

	FS_AttackData* requestedAttack = _attackDataMap.Find(AttackName);

	if (requestedAttack) {

		UE_LOG(LogTemp, Warning, TEXT("UNLOCKING ATTACK"));

		if (!requestedAttack->bUnlocked) {
			requestedAttack->bUnlocked = true;

			_attackDataMap.Add(AttackName, *requestedAttack);

			if (_attackDataMap.Find(AttackName)->bUnlocked) {
				UE_LOG(LogTemp, Warning, TEXT("UNLOCKED ATTACK!"));
			}
		}
	}
}




// Called every frame
void UPlayerCombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

