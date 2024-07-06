// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/NikeCloth.h"


// Sets default values
ANikeCloth::ANikeCloth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANikeCloth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANikeCloth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANikeCloth::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("耐克衣服"));
}

