// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlyweightFactory.generated.h"

class UTree;
class UTreeTypeFlyweight;
/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UFlyweightFactory : public UObject
{
	GENERATED_BODY()


public:
	UTree* CreateNewTree(float X, float Y, FString Name, FLinearColor Color);
	
	UTreeTypeFlyweight* GetTreeType(FString Name, FLinearColor Color);

	//享元池
	TArray<UTreeTypeFlyweight*> TreeTypes;
};
