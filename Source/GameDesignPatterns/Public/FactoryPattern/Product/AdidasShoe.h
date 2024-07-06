// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shoe.h"
#include "AdidasShoe.generated.h"

UCLASS()
class GAMEDESIGNPATTERNS_API AAdidasShoe : public AShoe
{
	GENERATED_BODY()

public:
	AAdidasShoe();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void Show() override;
};
