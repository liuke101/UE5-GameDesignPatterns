// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GDPMeyersLazySingleton.generated.h"

/**
 * Meyers懒汉式单例
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPMeyersLazySingleton : public UObject
{
	GENERATED_BODY()

public:
	
	static UGDPMeyersLazySingleton* GetGDPMeyersLazySingletonInstance();

	void Test();

private:
	UGDPMeyersLazySingleton() = default;
	virtual ~UGDPMeyersLazySingleton() override = default;
};
