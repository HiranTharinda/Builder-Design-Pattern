#pragma once
#include "Builder.h"
#include <string>
#include "Vehicle.h"

class CarBuilder : public Builder
{
public:
	CarBuilder();
	~CarBuilder();
	void BuildEngine();
	void BuildBody();
	Vehicle* GetVehicle();

private:
	Vehicle* vehicle;

};

