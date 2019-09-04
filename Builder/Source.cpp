#include <iostream>
#include "Director.h"
#include "VanBuilder.h"
#include "CarBuilder.h"
int main()
{

	Director director;

	VanBuilder vanbuilder;
	CarBuilder carbuilder;

	//Build a car
	std::cout << "Building a car" << std::endl;
	director.SetBuilder(&carbuilder); 
	director.BuildVehicle();


	//Build a van
	std::cout << "Building a van" << std::endl;
	director.SetBuilder(&vanbuilder);
	director.BuildVehicle();

}