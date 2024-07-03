// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GDPLazyGameSingleton.generated.h"

/**
 * 手动实现懒汉式单例
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPLazyGameSingleton : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GameDesignPatterns|SingletonPattern")
	static UGDPLazyGameSingleton* GetGDPNativeGameSingletonInstance();

	UFUNCTION(BlueprintCallable, Category = "GameDesignPatterns|SingletonPattern")
	void Test();
	
private:
	UGDPLazyGameSingleton() = default;
	virtual ~UGDPLazyGameSingleton() override = default; 

	// 在原生C++中需要delete，不适用于UObject
	// UGDPNativeGameSingleton(const UGDPNativeGameSingleton&) = delete;
	// UGDPNativeGameSingleton& operator=(const UGDPNativeGameSingleton&) = delete;

	static UGDPLazyGameSingleton* Instance;
};

//懒汉，初始不进行实例化
UGDPLazyGameSingleton* UGDPLazyGameSingleton::Instance = nullptr;