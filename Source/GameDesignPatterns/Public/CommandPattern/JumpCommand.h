// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Command.h"
#include "JumpCommand.generated.h"

/**
 * 具体命令类，跳跃命令
 */
UCLASS()
class GAMEDESIGNPATTERNS_API UJumpCommand : public UCommand
{
	GENERATED_BODY()
public:
	virtual void Execute() override;
};
