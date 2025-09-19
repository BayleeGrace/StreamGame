// Copyright Epic Games, Inc. All Rights Reserved.

#include "TextUtilitiesBPLibrary.h"
#include "Engine/DataTable.h"
#include "TextUtilities.h"


UTextUtilitiesBPLibrary::UTextUtilitiesBPLibrary()
{

}

FString UTextUtilitiesBPLibrary::GenerateRandomTextFromData(UDataTable* textData)
{
	// Find a row with the correct tag
	//FName tagName = FName(tag.ToString());

	// Grab a random (clamped) number in columns 1, 2, and 3

	// Repeat steps 1 and 2 twice [POSSIBLY MAKE THE DESIGNER CHOOSE HOW MANY ITERATIONS]

	// Append each output together to return the FText

	//FText textRef = FText::FromString("TestText");
	FString textRef = "TestString";
	return textRef;
}

