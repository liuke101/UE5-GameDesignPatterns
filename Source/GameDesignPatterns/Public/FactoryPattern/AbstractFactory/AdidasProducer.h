// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbstractFactory.h"
#include "AdidasProducer.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UAdidasProducer : public UAbstractFactory
{
	GENERATED_BODY()

public:

	virtual void CreateShoe() override;
	virtual void CreateCloth() override;
};
