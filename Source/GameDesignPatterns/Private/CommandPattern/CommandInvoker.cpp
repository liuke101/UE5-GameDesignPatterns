// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandPattern/CommandInvoker.h"
#include "CommandPattern/JumpCommand.h"
#include "GameDesignPatterns/GameDesignPatternsCharacter.h"
#include "Kismet/GameplayStatics.h"

void UCommandInvoker::Invoke()
{
	// 命令接收者
	AGameDesignPatternsCharacter* Receiver = Cast<AGameDesignPatternsCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	//创建跳跃命令对象
	UJumpCommand* JumpCommand = NewObject<UJumpCommand>();
	JumpCommand->SetReceiver(Receiver);
	
	//执行跳跃命令
	JumpCommand->Execute();
}

