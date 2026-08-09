#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"

// Exact supported versions
#define UE_IS_5_2 (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION == 2)
// 5.7-era APIs (TCheckedFormatString, etc.) remain valid on 5.8, so treat
// every 5.7+ engine as the "5.7" code path rather than falling off the ladder.
#define UE_IS_5_7 (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 7)

// Convenience macro
#define UE_IS_SUPPORTED (UE_IS_5_2 || UE_IS_5_7)
