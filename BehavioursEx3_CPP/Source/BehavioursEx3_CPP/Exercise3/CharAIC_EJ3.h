// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TargetPoint_Ej3.h"

#include "CharAIC_Ej3.generated.h"

UCLASS()
class BEHAVIOURSEX3_CPP_API ACharAIC_Ej3 : public AAIController
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	float TraceRadius{10.f};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackBoardKeys")
	FName TargetPointIndex_BBKeyName { "" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackBoardKeys")
	FName TargetPointPosition_BBKeyName{ "" };

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BlackBoardKeys")
	FName TargetActorToFollow_BBKeyName{ "" };

	UFUNCTION(BlueprintCallable, Category = "Task")
	void UpdateNextTargetPoint();

	UFUNCTION(BlueprintCallable, Category = "Task")
	void CheckNearbyEnemy();

};
