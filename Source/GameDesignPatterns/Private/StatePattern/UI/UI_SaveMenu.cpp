// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/UI/UI_SaveMenu.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "StatePattern/StateContextHUD.h"


void UUI_SaveMenu::OnReturnStartMenu()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->StartMenu);
	}
}

void UUI_SaveMenu::NativeConstruct()
{
	ReturnStartMenuButton->OnClicked.AddDynamic(this, &UUI_SaveMenu::OnReturnStartMenu);
}
