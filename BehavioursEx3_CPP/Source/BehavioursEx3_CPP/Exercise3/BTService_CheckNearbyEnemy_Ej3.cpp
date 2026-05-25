// Fill out your copyright notice in the Description page of Project Settings.

#include "BTService_CheckNearbyEnemy_Ej3.h"

#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "CharAIC_Ej3.h"
#include "TargetPoint_Ej3.h"

void UBTService_CheckNearbyEnemy_Ej3::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	ACharAIC_Ej3* Enemy_AIC = Cast<ACharAIC_Ej3>(OwnerComp.GetOwner());

	Enemy_AIC->CheckNearbyEnemy();
}
