// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Strategy.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API UStrategy : public UObject
{
	GENERATED_BODY()

public:
	virtual int CalcValue(int32 a, int32 b);
};
