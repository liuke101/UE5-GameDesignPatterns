// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SimpleFactory.generated.h"

enum class EShoeType : uint8;
class AShoe;

/**
 * 简单工厂
 */
UCLASS()
class GAMEDESIGNPATTERNS_API USimpleFactory : public UObject
{
	GENERATED_BODY()

public:
	void CreateShoe(EShoeType InType);
};
