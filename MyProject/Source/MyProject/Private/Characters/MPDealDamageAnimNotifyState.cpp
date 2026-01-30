#include "Characters/MPDealDamageAnimNotifyState.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Characters/MPBaseCharacter.h"

void UMPDealDamageAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Yellow, TEXT("DealDamage Begin Notify"));

	if (AMPBaseCharacter* Character = Cast<AMPBaseCharacter>(MeshComp->GetOwner()))
	{
		Character->ActivateAttack(true);
	}
}

void UMPDealDamageAnimNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	FVector StartTraceLocation = MeshComp->GetSocketLocation(TEXT("RightHandSocket"));
	FVector EndTraceLocation = MeshComp->GetSocketLocation(TEXT("LeftHandSocket"));
	float Radius = 10.0f;
	bool bComplexTrace = false;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(MeshComp->GetOwner());
	bool bIgnoreSelf = true;
	FLinearColor TraceColor = FLinearColor::Red;
	FLinearColor TraceHitColor = FLinearColor::Green;
	float DrawTime = 10.0f;

	TArray<FHitResult> HitArray;

	//const bool Hit = UKismetSystemLibrary::SphereTraceMulti(MeshComp, StartTraceLocation, EndTraceLocation, Radius,
	//	UEngineTypes::ConvertToTraceType(ECC_Camera), bComplexTrace, ActorsToIgnore,
	//	EDrawDebugTrace::ForDuration, HitArray, bIgnoreSelf, TraceColor, TraceHitColor, DrawTime);

	//if (Hit)
	//{
	//	for (const FHitResult& HitResult : HitArray)
	//	{
	//		UGameplayStatics::ApplyDamage(HitResult.GetActor(), // Damaged Actor
	//			20, // Damage
	//			(Cast<APawn>(MeshComp->GetOwner()))->GetController(), // Instigator (Controller)
	//			MeshComp->GetOwner(), // Damage Causer (Actor)
	//			UDamageType::StaticClass()); // Default Damage Type
	//	}
	//}

}

void UMPDealDamageAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	GEngine->AddOnScreenDebugMessage(-1, 4.5f, FColor::Yellow, TEXT("DealDamage End Notify"));

	if (AMPBaseCharacter* Character = Cast<AMPBaseCharacter>(MeshComp->GetOwner()))
	{
		Character->ActivateAttack(false);
	}
}
