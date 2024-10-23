#pragma once
#include "RenderTypes.h"
#include "SlateApplication.generated.h"

class FSlateRenderer;

UCLASS()
class RENDER_API FSlateApplication : public UObject
{
	GENERATED_BODY();

public:
	static shared_ptr<FSlateApplication> Initialize(const shared_ptr<FSlateRenderer>& Renderer); 

	void Tick(); 
};