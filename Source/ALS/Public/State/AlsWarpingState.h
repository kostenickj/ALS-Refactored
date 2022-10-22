#pragma once

#include "AlsWarpingState.generated.h"


USTRUCT(BlueprintType)
struct ALS_API FAlsWarpingAnimationState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ALS")
	float LocmotionAngle{0};

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ALS")
	float InterpolatedLocmotionAngle{0};
};