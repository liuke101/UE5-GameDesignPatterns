// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Prototype.h"
#include "GameFramework/Actor.h"
#include "PrototypeCharacterA.generated.h"

UCLASS()
class GAMEDESIGNPATTERNS_API APrototypeCharacterA : public APrototype
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APrototypeCharacterA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual APrototype* Clone() override;
};
