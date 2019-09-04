#include "Director.h"
#include "Builder.h"


	

Director::Director()
{
}

Director::~Director()
{
}

void Director::SetBuilder(Builder* newBuilder)
{
	builder = newBuilder;
}


void Director::BuildVehicle()
{
	builder->BuildEngine();
	builder->BuildBody();
}
