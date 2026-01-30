#include "Core/MPPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Characters/MPBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h" 


// Called when the game starts or when spawned
void AMPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = 
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
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
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this, &AMPPlayerController::StopMove);
		
		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMPPlayerController::Look);

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMPPlayerController::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AMPPlayerController::StopJumping);

		// Sprinting
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Triggered, this, &AMPPlayerController::StartSprint);
		EnhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this, &AMPPlayerController::StopSprint);

		// Attacking
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AMPPlayerController::Attack);

	}
}

void AMPPlayerController::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	
	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;

		// find out which camera is facing
		const FRotator Rotation = GetControlRotation();
		const FRotator CameraRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::X);
		// add movement in that direction
		ControlledCharacter->AddMovementInput(ForwardDirection, MovementVector.Y);

		// get right vector
		const FVector RightDirection = FRotationMatrix(CameraRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		ControlledCharacter->AddMovementInput(RightDirection, MovementVector.X);

	}
}

void AMPPlayerController::StopMove()
{
	if (ACharacter* ControlledCharacter = CastChecked<ACharacter>(GetCharacter()))
	{
		ControlledCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
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

void AMPPlayerController::Jump()
{
	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->Jump();
	}
}

void AMPPlayerController::StopJumping()
{
	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->StopJumping();
	}
}

void AMPPlayerController::StartSprint()
{
	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	}
}

void AMPPlayerController::StopSprint()
{
	if (ACharacter* ControlledCharacter = GetCharacter())
	{
		ControlledCharacter->GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
}

void AMPPlayerController::Attack()
{
	if (AMPBaseCharacter* ControlledCharacter = CastChecked<AMPBaseCharacter>(GetCharacter()))
	{
		ControlledCharacter->Attack();
	}
}