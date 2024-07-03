// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GDPGameInstance.generated.h"

/**
 * GameInstance
 * 设置：Project Settings->Project->Game Instance -> Game Instance Class
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "GameDesignPatterns|SingletonPattern")
	void Test();
};
