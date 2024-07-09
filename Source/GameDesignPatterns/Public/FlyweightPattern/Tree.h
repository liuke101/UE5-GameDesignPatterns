// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Tree.generated.h"

class UTreeTypeFlyweight;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UTree : public UObject
{
	GENERATED_BODY()


public:
	void Show();
	float X;
	float Y;
	
	UPROPERTY()
	UTreeTypeFlyweight* TreeType;
};
