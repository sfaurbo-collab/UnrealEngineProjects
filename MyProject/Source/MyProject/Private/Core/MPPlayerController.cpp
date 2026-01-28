#include "Core/MPPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

// Called when the game starts or when spawned
void AMPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = 
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}
}

// Allows the PlayerController to setup custom input bindings
void AMPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMPPlayerController::Move);
		
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMPPlayerController::Look);
	}
}

void AMPPlayerController::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (APawn* ControlledPawn = GetPawn())
	{
		// add movement 
		//ControlledPawn->AddMovementInput(ControlledPawn->GetActorForwardVector(), MovementVector.Y);
		//ControlledPawn->AddMovementInput(ControlledPawn->GetActorRightVector(), MovementVector.X);

		// find out which camera is facing
		const FRotator Rotation = GetControlRotation();
		const FRotator CameraRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::X);
		// add movement in that direction
		ControlledPawn->AddMovementInput(ForwardDirection, MovementVector.Y);

		// get right vector
		const FVector RightDirection = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		ControlledPawn->AddMovementInput(RightDirection, MovementVector.X);

	}
}

void AMPPlayerController::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();
	
	// add yaw and pitch input to controller
	AddYawInput(LookAxisVector.X);
	AddPitchInput(-LookAxisVector.Y);
}