// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shoe.h"
#include "LiNingShoe.generated.h"

UCLASS()
class GAMEDESIGNPATTERNS_API ALiNingShoe : public AShoe
{
	GENERATED_BODY()

public:
	ALiNingShoe();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void Show() override;
};
