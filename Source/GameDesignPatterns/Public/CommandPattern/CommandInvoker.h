// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CommandInvoker.generated.h"


/**
 * 命令调用者
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UCommandInvoker : public UObject
{
	GENERATED_BODY()
	
public:
	void Invoke();
};
