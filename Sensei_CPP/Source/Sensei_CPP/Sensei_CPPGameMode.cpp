// Copyright Epic Games, Inc. All Rights Reserved.

#include "Sensei_CPPGameMode.h"
#include "Sensei_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASensei_CPPGameMode::ASensei_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
