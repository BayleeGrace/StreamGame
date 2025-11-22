// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StreamCharacter.generated.h"

UCLASS()
class STREAMGAME_API AStreamCharacter : public ACharacter
{
	GENERATED_BODY()
	
	// Allows for a Static mesh Component to be placed on this actor class
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* visualMesh; // pointer to store an object (static mesh) to reference its place in memory

public:
	// Sets default values for this character's properties
	AStreamCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
