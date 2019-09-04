#pragma once
#include <string>

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	virtual void SetEngine(std::string Capacity);
	virtual void SetBody(std::string Doors);

private:
	std::string Capacity, Doors;
};

