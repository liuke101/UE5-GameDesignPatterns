// Fill out your copyright notice in the Description page of Project Settings.


#include "CommandPattern/JumpCommand.h"

#include "GameDesignPatterns/GameDesignPatternsCharacter.h"

void UJumpCommand::Execute()
{
	if(Receiver)
	{
		Receiver->Jump();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("角色跳跃"));
	}
}
