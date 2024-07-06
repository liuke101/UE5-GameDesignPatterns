// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cloth.generated.h"

//Cloth抽象基类
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API ACloth : public AActor
{
	GENERATED_BODY()

public:
	ACloth();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	//基类重写该方法
	virtual void Show();
};
