﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Strategy.h"
#include "CalcStrategyB.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UCalcStrategyB : public UStrategy
{
	GENERATED_BODY()
public:
	virtual int CalcValue(int32 a, int32 b) override;
};
