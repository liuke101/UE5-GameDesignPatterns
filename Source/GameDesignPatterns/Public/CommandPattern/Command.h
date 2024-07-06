// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Command.generated.h"

class AGameDesignPatternsCharacter;
/**
 * 命令抽象基类
 */
UCLASS(Abstract)
class GAMEDESIGNPATTERNS_API UCommand : public UObject
{
	GENERATED_BODY()
public:
	void SetReceiver(AGameDesignPatternsCharacter* InReceiver) {Receiver = InReceiver;}

	virtual void Execute();
	
protected:
	//Reciver是命令最后的执行者，可以是玩家操控的Pawn或其他对象
	UPROPERTY()
	AGameDesignPatternsCharacter* Receiver = nullptr; 
};
