// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StrategyContext.generated.h"

class UStrategy;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UStrategyContext : public UObject
{
	GENERATED_BODY()
public:
	FORCEINLINE void SetStatregy(UStrategy* InStrategy) {Strategy = InStrategy;}

	int Calc(int a, int b);
protected:
	UPROPERTY()
	UStrategy* Strategy = nullptr;
};
