// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ProductCharacter.generated.h"

/**
 * 复杂产品-游戏角色
 */
UCLASS()
class GAMEDESIGNPATTERNS_API AProductCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AProductCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	//属性
	FString Body;
	FString Weapon;
	FString Cloth;

	void Show() const;
};
