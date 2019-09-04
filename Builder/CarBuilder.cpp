#include "CarBuilder.h"
#include <iostream>



CarBuilder::CarBuilder()
{
	vehicle = new Vehicle();
}

CarBuilder::~CarBuilder()
{
}

void CarBuilder::BuildEngine()
{	
	vehicle->SetEngine("3000cc");
	std::cout << "Car Engine Capacity is set\n";
}

void CarBuilder::BuildBody()
{	
	vehicle->SetBody("5 Door");
	std::cout << "Car body is set\n";
}

Vehicle* CarBuilder::GetVehicle()
{
	return this->vehicle;
}
