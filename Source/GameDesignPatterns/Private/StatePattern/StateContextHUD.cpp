// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/StateContextHUD.h"

#include "StatePattern/BaseStateWidget.h"


void AStateContextHUD::BeginPlay()
{
	Super::BeginPlay();

	if(StartMenuClass)
	{
		StartMenu = Cast<UBaseStateWidget>(CreateWidget(GetWorld(), StartMenuClass));
	}
	
	if(OptionMenuClass)
	{
		OptionMenu = Cast<UBaseStateWidget>(CreateWidget(GetWorld(), OptionMenuClass));
	}

	if(LevelLoadingClass)
	{
		LevelLoading = Cast<UBaseStateWidget>(CreateWidget(GetWorld(), LevelLoadingClass));
	}

	if(SaveMenuClass)
	{
		SaveMenu = Cast<UBaseStateWidget>(CreateWidget(GetWorld(), SaveMenuClass));
	}
}

void AStateContextHUD::ChangeState(UBaseStateWidget* StateWidget)
{
	if(CurrentState)
	{
		CurrentState->ExitState();
	}

	if(StateWidget)
	{
		CurrentState = StateWidget;
		CurrentState->EnterState();
	}
}
