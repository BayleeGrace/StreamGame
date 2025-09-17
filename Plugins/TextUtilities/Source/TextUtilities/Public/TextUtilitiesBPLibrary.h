// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextUtilitiesBPLibrary.generated.h"

UCLASS()
class UTextUtilitiesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	// Function to randomly generate a chat username with a data table
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Generate Random Text from Data Table", Keywords = "Text Utilities Generate Text"), Category = "TextUtilities")
	FText GenerateRandomTextFromData(UDataTable* textData) const;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "TextUtilities sample test testing"), Category = "TextUtilitiesTesting")
	static float TextUtilitiesSampleFunction(float Param);
};
