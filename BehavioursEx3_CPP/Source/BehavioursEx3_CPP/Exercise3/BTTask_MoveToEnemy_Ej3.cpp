// Fill out your copyright notice in the Description page of Project Settings.


#include "Exercise3/BTTask_MoveToEnemy_Ej3.h"

#include "Navigation/PathFollowingComponent.h"
#include "CharAIC_Ej3.h"

UBTTask_MoveToEnemy_Ej3::UBTTask_MoveToEnemy_Ej3()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_MoveToEnemy_Ej3::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::InProgress;
}

void UBTTask_MoveToEnemy_Ej3::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ACharAIC_Ej3* CharAIC = Cast<ACharAIC_Ej3>(OwnerComp.GetOwner());

	EPathFollowingRequestResult::Type MoveToActorResult = CharAIC->MoveToEnemy();

	if (MoveToActorResult == EPathFollowingRequestResult::AlreadyAtGoal)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}

FString UBTTask_MoveToEnemy_Ej3::GetStaticDescription() const
{
	return TEXT("Chase the main player");
}
