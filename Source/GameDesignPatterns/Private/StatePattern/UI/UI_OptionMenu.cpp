// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/UI/UI_OptionMenu.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "StatePattern/StateContextHUD.h"

void UUI_OptionMenu::OnReturnStartMenu()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->StartMenu);
	}
}

void UUI_OptionMenu::NativeConstruct()
{
	ReturnStartMenuButton->OnClicked.AddDynamic(this, &UUI_OptionMenu::OnReturnStartMenu);
}
