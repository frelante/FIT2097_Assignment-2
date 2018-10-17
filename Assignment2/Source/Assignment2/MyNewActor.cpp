// Fill out your copyright notice in the Description page of Project Settings.

#include "MyNewActor.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AMyNewActor::AMyNewActor()
{

	bReplicates = true;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bReplicateMovement = true;

	//GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	//GetStaticMeshComponent()->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AMyNewActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyNewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyNewActor::OnRep_IsActive()
{



}

void AMyNewActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyNewActor, bIsActive);

}

bool AMyNewActor::IsActive()
{
	return bIsActive;
}

void AMyNewActor::setActive(bool NewState)
{

	if (Role == ROLE_Authority)
	{
		bIsActive = NewState;
	}

}