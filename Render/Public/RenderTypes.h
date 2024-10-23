#pragma once
#include "EngineMinimal.h"

struct FSystemResolution
{
	int32 ScreenWidth; 
	int32 ScreenHeight; 

	FSystemResolution()
		: ScreenWidth(800)
		, ScreenHeight(600)
	{

	}
};

extern RENDER_API FSystemResolution GSystemResolution; 