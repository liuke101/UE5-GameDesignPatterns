// Fill out your copyright notice in the Description page of Project Settings.


#include "StatePattern/UI/UI_StartMenu.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "StatePattern/StateContextHUD.h"

void UUI_StartMenu::NativeConstruct()
{
	Super::NativeConstruct();

	StartGameButton->OnClicked.AddDynamic(this, &UUI_StartMenu::OnStartGame);
	SaveGameButton->OnClicked.AddDynamic(this, &UUI_StartMenu::OnSaveGame);
	OptionButton->OnClicked.AddDynamic(this, &UUI_StartMenu::OnOption);
	ExitButton->OnClicked.AddDynamic(this, &UUI_StartMenu::OnExitGame);
}

void UUI_StartMenu::OnStartGame()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->LevelLoading);
	}
}

void UUI_StartMenu::OnSaveGame()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->SaveMenu);
	}
}

void UUI_StartMenu::OnOption()
{
	if(AStateContextHUD* StateContext = Cast<AStateContextHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD()))
	{
		StateContext->ChangeState(StateContext->OptionMenu);
	}
}

void UUI_StartMenu::OnExitGame()
{
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}
