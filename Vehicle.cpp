#include "Vehicle.h"
#include <iostream>
#include <vector>
using namespace std;

//Constructor 
Vehicle::Vehicle(string _make, string _model, int _year, float _price, int _mileage)
{
	make = _make;
	model = _model;
	year = _year;
	price = _price;
	mileage = _mileage;

}

string Vehicle::GetYearMakeModel() //Returns the Year, Make, and Model in that order 
{
	string YearMakeModel = to_string(year) + " " + make + " " + model;
	return YearMakeModel;
}

float Vehicle::GetPrice() //Returns the price
{
	return price;
}

void Vehicle::Display() //Prints out the vehicle's details in a single line: 1973 Ford Mustang $9500 11300
{
	cout << year << " " << make << " " << model << " " << "$" << price << " " << mileage << endl;
}