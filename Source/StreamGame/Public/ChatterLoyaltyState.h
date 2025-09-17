#pragma once
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EChatterLoyaltyState : uint8
{
	NewChatter = 0 UMETA(DisplayName = "NewChatter"),
	Follower = 1 UMETA(DisplayName = "Follower"),
	Donor = 2 UMETA(DisplayName = "Donor"),
	Subscriber = 3 UMETA(DisplayName = "Subscriber"),
	Moderator = 4 UMETA(DisplayName = "Moderator")
};