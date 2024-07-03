// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GDPLazySingleton.generated.h"

/**
 * 手动实现懒汉式单例
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPLazySingleton : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GameDesignPatterns|SingletonPattern")
	static UGDPLazySingleton* GetGDPLazySingletonInstance();

	UFUNCTION(BlueprintCallable, Category = "GameDesignPatterns|SingletonPattern")
	void Test();
	
private:
	UGDPLazySingleton() = default;
	virtual ~UGDPLazySingleton() override = default; 
	
	static UGDPLazySingleton* Instance;
};

//懒汉，初始不进行实例化
UGDPLazySingleton* UGDPLazySingleton::Instance = nullptr;