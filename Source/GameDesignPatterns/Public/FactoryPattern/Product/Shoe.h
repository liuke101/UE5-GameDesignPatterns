// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Shoe.generated.h"

enum class EShoeType : uint8
{
	ST_Nike,
	ST_Adidas,
	ST_LiNing,
};

// shoe抽象基类
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API AShoe : public AActor
{
	GENERATED_BODY()

public:
	AShoe();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	//基类重写该方法
	virtual void Show();
};
