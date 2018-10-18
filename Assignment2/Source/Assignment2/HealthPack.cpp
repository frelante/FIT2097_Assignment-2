// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPack.h"
#include "Assignment2Character.h"

// Sets default values
AHealthPack::AHealthPack()
{
	bReplicates = true;

	OnActorBeginOverlap.AddDynamic(this, &AHealthPack::OnOverlap);

}

void AHealthPack::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	if (OtherActor != nullptr && OtherActor != this)
	{
		class AAssignment2Character* MyCharacter = Cast<AAssignment2Character>(OtherActor);

		if (MyCharacter && MyCharacter->GetHealth() < 100.0f)
		{
			MyCharacter->UpdateHealth(100.0f);
			Destroy();
		}
	}
}

