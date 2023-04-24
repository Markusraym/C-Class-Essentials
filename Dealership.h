#pragma once
#include "Vehicle.h"
#include "Showroom.h"
#include <vector>
#include <iostream>
using namespace std;

class Dealership
{
	string name;
	unsigned int capacity;
	vector<Showroom> showrooms;
	unsigned int numberofShowrooms;
	unsigned int vehicleCounter = 0;
	float priceCounter = 0;

public: 

	//Constructor prototype
	Dealership(string name = "Generic Dealership", unsigned int capacity = 0);

	//Accessors
	float GetAveragePrice();

	//Mutators/Behaviors 
	void AddShowroom(Showroom s);
	void ShowInventory();
};
