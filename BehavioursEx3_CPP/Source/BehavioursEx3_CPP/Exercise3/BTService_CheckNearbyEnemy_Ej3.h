// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CheckNearbyEnemy_Ej3.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIOURSEX3_CPP_API UBTService_CheckNearbyEnemy_Ej3 : public UBTService
{
	GENERATED_BODY()
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
