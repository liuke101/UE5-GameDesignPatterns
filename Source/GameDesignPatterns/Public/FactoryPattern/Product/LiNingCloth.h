// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cloth.h"
#include "LiNingCloth.generated.h"

UCLASS()
class GAMEDESIGNPATTERNS_API ALiNingCloth : public ACloth
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALiNingCloth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Show() override;
};
