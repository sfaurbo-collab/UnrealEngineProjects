// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FPCharacterBase.h"
#include "EnhancedInputComponent.h"

// Sets default values
AFPCharacterBase::AFPCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFPCharacterBase::Move(const FInputActionValue& Value)
{

}

// Called every frame
void AFPCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveActions, ETriggerEvent::Triggered, this, &AFPCharacterBase::Move);
	}

}

