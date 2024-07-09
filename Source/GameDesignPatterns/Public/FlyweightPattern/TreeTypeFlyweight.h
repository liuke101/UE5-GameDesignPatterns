// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TreeTypeFlyweight.generated.h"

/**
 *  享元类 包含树的部分状态
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UTreeTypeFlyweight : public UObject
{
	GENERATED_BODY()

public:

	FString Name;
	FLinearColor Color;
};
