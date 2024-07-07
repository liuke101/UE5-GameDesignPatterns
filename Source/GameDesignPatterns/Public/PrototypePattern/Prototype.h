// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Prototype.generated.h"

UCLASS()
class GAMEDESIGNPATTERNS_API APrototype : public AActor
{
	GENERATED_BODY()

public:
	APrototype();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual APrototype* Clone();
	virtual void Show() const;

protected:
	int32 Health;
	int32 Attack;
};
