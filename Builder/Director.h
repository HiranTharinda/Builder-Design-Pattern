#pragma once
#include "Builder.h"
class Director
{

public:
	Director();
	~Director();
	void SetBuilder(Builder* newBuilder);
	void BuildVehicle();

private:
	Builder* builder;
};

