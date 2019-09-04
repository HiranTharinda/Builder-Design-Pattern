#include "Vehicle.h"

Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}

void Vehicle::SetEngine(std::string Capacity)
{
	this->Capacity = Capacity;
}

void Vehicle::SetBody(std::string Doors)
{	
	this->Doors = Doors;
}
