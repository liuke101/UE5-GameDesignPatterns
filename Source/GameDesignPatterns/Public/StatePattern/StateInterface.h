// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StateInterface.generated.h"


UINTERFACE()
class UStateInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 状态抽象基类，采用接口的形式
 */
class GAMEDESIGNPATTERNS_API IStateInterface
{
	GENERATED_BODY()

public:
	virtual void EnterState() = 0;
	virtual void ExitState() = 0;
};
