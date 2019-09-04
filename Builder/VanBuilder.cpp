#include "VanBuilder.h"
#include <iostream>

VanBuilder::VanBuilder()
{
	vehicle = new Vehicle();
}

VanBuilder::~VanBuilder()
{

}

void VanBuilder::BuildEngine()
{	
	vehicle->SetEngine("1000");
	std::cout << "Car Engine Capacity is set\n";
}

void VanBuilder::BuildBody()
{
	vehicle->SetBody("4 Door");
	std::cout << "Van body is set\n";
}

Vehicle* VanBuilder::GetVehicle()
{
	return this->vehicle;
}

