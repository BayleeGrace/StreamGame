// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "TextUtilitiesBPLibrary.generated.h"

UCLASS()
class UTextUtilitiesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UTextUtilitiesBPLibrary();

	// Function to randomly generate a chat username with a data table
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Generate Random Text from Data Table", Keywords = "Text Utilities Generate Text"), Category = "TextUtilities")
	static FString GenerateRandomTextFromData(UDataTable* textData);
};
