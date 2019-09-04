#pragma once
#include <string>
#include "Vehicle.h"
class Builder
{	

public:
	Builder();
	~Builder();
	virtual void BuildEngine();
	virtual void BuildBody();
	virtual Vehicle* GetVehicle();
	void BuildVehicle();
};

