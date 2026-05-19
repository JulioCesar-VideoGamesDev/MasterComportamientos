// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TargetPoint_Ej3.h"

#include "CharAIC_Ej3.generated.h"

UCLASS()
class COMPORTAMIENTOS_API ACharAIC_Ej3 : public AAIController
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Task")
	void UpdateNextTargetPoint();
};
