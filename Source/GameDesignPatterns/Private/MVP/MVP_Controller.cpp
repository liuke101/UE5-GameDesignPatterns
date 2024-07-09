// Fill out your copyright notice in the Description page of Project Settings.


#include "MVP/MVP_Controller.h"

#include "MVP/MVP_Model.h"

void UMVP_Controller::UpdateHealth(int32 NewHealth)
{
	if(Model)
	{
		Model->Health = NewHealth;
		Model->OnHealthChanged.Broadcast(NewHealth);
	}
}

void UMVP_Controller::UpdateMana(int32 NewMana)
{
	if(Model)
	{
		Model->Mana = NewMana;
		Model->OnManaChanged.Broadcast(NewMana);
	}
}

void UMVP_Controller::SetModel(UMVP_Model* InModel)
{
	Model = InModel;

	// Bind to model events
	if(Model)
	{
		Model->OnHealthChanged.AddLambda([&](int32 NewHealth)
		{
			OnModelHealthChanged.Broadcast(NewHealth);
		});
		
		Model->OnManaChanged.AddLambda([&](int32 NewMana)
		{
			OnModelManaChanged.Broadcast(NewMana);
		});
	}
}
