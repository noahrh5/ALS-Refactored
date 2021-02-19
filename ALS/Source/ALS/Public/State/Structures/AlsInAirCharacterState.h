#pragma once

#include "AlsInAirCharacterState.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsInAirCharacterState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = -180, ClampMax = 180))
	float TargetYawAngle;
};