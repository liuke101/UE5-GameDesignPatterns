// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/Shoe.h"


AShoe::AShoe()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AShoe::BeginPlay()
{
	Super::BeginPlay();
	Show();
}

void AShoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AShoe::Show()
{
}


