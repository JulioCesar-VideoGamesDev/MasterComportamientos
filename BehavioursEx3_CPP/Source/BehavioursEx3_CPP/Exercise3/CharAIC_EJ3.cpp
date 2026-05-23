// Fill out your copyright notice in the Description page of Project Settings.


#include "CharAIC_Ej3.h"
#include "BrainComponent.h"
#include "EngineUtils.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

#include "BehaviorTree/BlackboardComponent.h"

void ACharAIC_Ej3::UpdateNextTargetPoint()
{
	UBrainComponent* Brain = GetBrainComponent();
	UBlackboardComponent* pBlackBoard = Brain->GetBlackboardComponent();

	int32 iTargetPointIndex = pBlackBoard->GetValueAsInt(TargetPointIndex_BBKeyName);

	if (iTargetPointIndex >= 4)
	{
		iTargetPointIndex = 0;
		pBlackBoard->SetValueAsInt(TargetPointIndex_BBKeyName, iTargetPointIndex);
	}

	for (TActorIterator<ATargetPoint_Ej3> It(GetWorld()); It; ++It)
	{
		ATargetPoint_Ej3* pTargetPoint = *It;

		if (iTargetPointIndex == pTargetPoint->m_iIndex)
		{
			pBlackBoard->SetValueAsVector(TargetPointPosition_BBKeyName, pTargetPoint->GetActorLocation());
			break;
		}
	}

	pBlackBoard->SetValueAsInt(TargetPointIndex_BBKeyName, (iTargetPointIndex + 1));
}

void ACharAIC_Ej3::CheckNearbyEnemy()
{
	UBrainComponent* Brain = GetBrainComponent();
	UBlackboardComponent* pBlackBoard = Brain->GetBlackboardComponent();

	FVector myPosition = GetOwner()->GetActorLocation();

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));

	APawn* pPawn = GetPawn();
	TArray<AActor*> ActorsIgnored;
	ActorsIgnored.Add(pPawn);

	TArray<FHitResult> Hits;

	bool result = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(), myPosition, myPosition + 1, TraceRadius, ObjectTypes, false, ActorsIgnored, EDrawDebugTrace::ForDuration, Hits, true);

	if (result)
	{
		for (int i = 0; i < Hits.Num(); i++)
		{
			FHitResult Hit = Hits[i];

			ACharacter* pChar = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

			if (Hit.GetActor() == pChar)
			{
				pBlackBoard->SetValueAsObject(TargetActorToFollow_BBKeyName, pChar);
				break;
			}
		}
	}
	else
	{
		Blackboard->SetValueAsObject(TargetActorToFollow_BBKeyName, NULL);
	}
}
