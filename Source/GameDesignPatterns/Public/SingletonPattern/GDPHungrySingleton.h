// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GDPHungrySingleton.generated.h"

/**
 * 饿汉式单例
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UGDPHungrySingleton : public UObject
{
	GENERATED_BODY()

public:
	static UGDPHungrySingleton* GetGDPHungrySingletonInstance() { return Instance; }

	void Test();
private:
	static UGDPHungrySingleton* Instance;

	UGDPHungrySingleton() = default;
	virtual ~UGDPHungrySingleton() override = default;
};

//饿汉，直接实例化
UGDPHungrySingleton* UGDPHungrySingleton::Instance = NewObject<UGDPHungrySingleton>();
