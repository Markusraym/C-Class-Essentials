#pragma once
#include <string>
#include <vector>
#include "Vehicle.h"
using namespace std;

class Showroom
{
	string name; // The name of the showroom
	vector<Vehicle> vehicles; //Vector to store Vehicle objects
	int capacity;
	unsigned int numberofVehicles;

public:
	//Constructor prototype
	Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);

	//Accessor
	vector<Vehicle> GetVehicleList(); //Return the vector<Vehicle> objects

	//Mutators/Setters
	void AddVehicle(Vehicle v); //Add a vechicle to vector if capacity isnt full
	void ShowInventory(); // Show all vehicles in showroom using Display() of each vehicle
	float GetInventoryValue(); //Sum up the prices of all vehicles in showroom and return that value



};