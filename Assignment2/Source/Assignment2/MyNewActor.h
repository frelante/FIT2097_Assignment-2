// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyNewActor.generated.h"

UCLASS()
class ASSIGNMENT2_API AMyNewActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyNewActor();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintPure)
		bool IsActive();

	UFUNCTION(BlueprintCallable)
		void setActive(bool NewState);



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	UFUNCTION()
	virtual void OnRep_IsActive();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
