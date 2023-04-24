#include "Showroom.h"
#include <iostream>
#include <vector>
using namespace std;

//Constructor definition
Showroom::Showroom(string _name, unsigned int _capacity)
{
	name = _name;
	capacity = _capacity;
	
}
//this may not work, name could be wrong
vector<Vehicle> Showroom::GetVehicleList() //Returns the vector vehicle object 
{
	return vehicles;
}

void Showroom::AddVehicle(Vehicle v)
{
	numberofVehicles = vehicles.size();
	if (numberofVehicles == capacity) {
		cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
	}
	else {
		vehicles.push_back(v);
	}
}

void Showroom::ShowInventory()
{	
	if (vehicles.size() == 0)
	{
		cout << name << " is empty!" << endl;
	}
	else {
		cout << "Vehicles in " << name << endl;
	}

	for (int i = 0; i < vehicles.size(); i++) {
		vehicles.at(i).Display();
	}
}

float Showroom::GetInventoryValue()
{	
	int totalPrice = 0;
	for (int i = 0; i < vehicles.size(); i++) {
		totalPrice = totalPrice + vehicles.at(i).GetPrice();
	}
	return totalPrice;
}
