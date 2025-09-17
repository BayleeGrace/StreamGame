#pragma once
#include "CoreMinimal.h"
#include "ChatterLoyaltyState.h"
#include "GameplayTagContainer.h"
#include "FChatterData.generated.h"

USTRUCT(BlueprintType)
struct STREAMGAME_API FChatterData
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Chat Data")
	FText chatterUsername;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Chat Data")
	TArray<FText> sentChatMessages;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Chat Data")
	EChatterLoyaltyState chatterLoyalty;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Chat Data")
	FGameplayTagContainer interestsTags;

	// Function to randomly generate a chat username with 2-4 array
	//FText generateRandomUsername(UDataTable* usernameData) const;
};