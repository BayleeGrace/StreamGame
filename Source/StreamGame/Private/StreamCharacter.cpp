#include "StreamCharacter.h"

// Sets default values
AStreamCharacter::AStreamCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add the static mesh component to the class
	visualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	visualMesh->SetupAttachment(RootComponent); // Calls the function to SetupAttachment (check Unreal Docs for info)
}

// Called when the game starts or when spawned
void AStreamCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStreamCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AStreamCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}