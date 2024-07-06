// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/NikeShoe.h"


// Sets default values
ANikeShoe::ANikeShoe()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANikeShoe::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANikeShoe::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANikeShoe::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("耐克鞋"));
}

