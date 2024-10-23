#pragma once
#include "RenderTypes.h"
#include "SlateRenderer.generated.h"


UCLASS()
class RENDER_API FSlateRenderer : public UObject
{
	GENERATED_BODY();

public:
	virtual bool Initialize();
	virtual bool Destroy(); 


};