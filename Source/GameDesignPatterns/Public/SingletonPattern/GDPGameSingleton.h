// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GDPGameSingleton.generated.h"

/**
 * GameSingletonClass
 * 设置：Project Settings->Engine->General settings->Game Singleton Class
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPGameSingleton : public UObject
{
	GENERATED_BODY()

public:
	static UGDPGameSingleton* GetGDPGameSingletonInstance();

	void Test();
};
