// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseFactory.generated.h"

/**
 *  工厂方法模式 抽象基类
 */
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API UBaseFactory : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void CreateShoe();
};
