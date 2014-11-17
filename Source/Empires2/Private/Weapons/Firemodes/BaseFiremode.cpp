// Fill out your copyright notice in the Description page of Project Settings.

#include "Empires2.h"
#include "BaseEmpiresWeapon.h"
#include "BaseFiremode.h"


UBaseFiremode::UBaseFiremode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	
}

UWorld* UBaseFiremode::GetWorld() const
{
	check(Weapon);
	return Weapon->GetWorld();
}

void UBaseFiremode::BeginFire()
{	
	BeginFireTime =  GetWorld()->GetTimeSeconds();
	bFiring = true;

}
void UBaseFiremode::EndFire()
{
	bFiring = false;
}

void UBaseFiremode::HandleFire()
{

}

void UBaseFiremode::SetWeapon(ABaseEmpiresWeapon* Weapon)
{
	this->Weapon = Weapon;
}

