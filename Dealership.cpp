#include "Vehicle.h"
#include "Showroom.h"
#include "Dealership.h"
#include <vector>
#include <string>
using namespace std;

//Constructor 
Dealership::Dealership(string _name, unsigned int _capacity)
{
	name = _name;
	capacity = _capacity;
}

float Dealership::GetAveragePrice()
{
	//Gets the total price of all vehicles
	for (int i = 0; i < showrooms.size(); i++) {
		priceCounter = priceCounter + showrooms.at(i).GetInventoryValue();
	}
	//MAY HAVE TO INTIALIZE VARIABLES TO ZERO HERE TO PREVENT THEM ADDING UP 
	//MAY ADD VEHICLECOUNT++ UNDER AddVehicle(); TO COUNT TOTAL VEHICLES IF NO WORK
	//Gets the total number of cars in the dealership
	for (int i = 0; i < showrooms.size(); i++) {
		vehicleCounter = vehicleCounter + showrooms.at(i).GetVehicleList().size();

	}
	
	return priceCounter / vehicleCounter;

}	

void Dealership::AddShowroom(Showroom s)
{
	numberofShowrooms = showrooms.size();
	if (numberofShowrooms == capacity) {
		cout << "Dealership is full, can't add another showroom!" << endl;
	}
	else {
		showrooms.push_back(s);
	}
}

void Dealership::ShowInventory()
{
	if (showrooms.size() == 0) {
		cout << name << " is empty!" << endl;
		cout << "Average car price: $0.00";
	}
	else {
		for (int i=0; i < showrooms.size(); i++) {
			showrooms.at(i).ShowInventory();
			cout << endl; 
		}
		cout << "Average car price: $" << GetAveragePrice();
	}
}