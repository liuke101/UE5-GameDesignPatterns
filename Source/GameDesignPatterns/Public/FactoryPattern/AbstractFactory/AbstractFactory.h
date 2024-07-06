// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbstractFactory.generated.h"

/**
 * 抽象工厂模式基类
 */
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API UAbstractFactory : public UObject
{
	GENERATED_BODY()
public:

	virtual void CreateShoe();
	virtual void CreateCloth();
};
