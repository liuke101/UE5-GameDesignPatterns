// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderPattern/ProductCharacter.h"


AProductCharacter::AProductCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AProductCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProductCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProductCharacter::Show() const
{
	//打印角色信息
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Body: %s Weapon: %s, Cloth: %s"), *Body, *Weapon, *Cloth));
}

