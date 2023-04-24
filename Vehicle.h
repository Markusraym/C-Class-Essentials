#pragma once
#include <string>
using namespace std;

class Vehicle
{
	string make; //Mazda, Toyota, etc
	string model; //Model S, F-150, etc
	unsigned int year; //year of the car, can only be positive
	float price; //Price of the car
	unsigned int mileage; //amount of miles on the car

public:
	//Constructor prototype
	Vehicle(string make = "COP3503", string model = "Rust Bucket", int year = 1900, float price = 0, int mileage = 0);

	//Accessors
	string GetYearMakeModel();
	float GetPrice();

	//Mutators/Setters
	void Display();



};
