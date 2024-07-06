// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseFactory.h"
#include "LiNingFactory.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDESIGNPATTERNS_API ULiNingFactory : public UBaseFactory
{
	GENERATED_BODY()
public:
	virtual void CreateShoe() override;
};
