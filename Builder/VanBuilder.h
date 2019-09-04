#pragma once
#include "Builder.h"
#include <string>
#include "Vehicle.h"

class VanBuilder : public Builder
{
public:
	VanBuilder();
	~VanBuilder();
	void BuildEngine();
	void BuildBody();
	Vehicle* GetVehicle();

private:
	Vehicle* vehicle;

};

