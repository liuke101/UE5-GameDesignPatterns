// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryPattern/Product/LiNingCloth.h"


// Sets default values
ALiNingCloth::ALiNingCloth()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALiNingCloth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALiNingCloth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALiNingCloth::Show()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("李宁衣服"));
}

