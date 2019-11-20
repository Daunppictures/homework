#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

Car::Car()
{
	engine_power;
	top_speed;
	car_brand;
	colour;
	model;
}
Car::Car(int a_engine_power,  int a_top_speed,  string a_car_brand, string a_colour, string a_model)
{
	car_brand = a_car_brand;
	top_speed = a_top_speed;
	engine_power = a_engine_power;
	colour = a_colour;
	model = a_model;
}

string Car::getCar_brand()
{
	return car_brand;
}
int Car::getTop_speed()
{
	return top_speed;
}
int Car::getEngine_power()
{
	return engine_power;
}
string Car::getColour()
{
	return colour;
}
string Car::getModel()
{
	return model;
}

void Car::get_inf() {
	cout << "\nYour car brand is: " << "\"" << getCar_brand() << "\"" << ", Top speed is: " << getTop_speed() << " Engine power is: " << getEngine_power() << " Colour is: " << getColour() << " Model of car is: " << getModel() << "\n";
}
Car::~Car() 
{
	cout << "Destructed" << endl;
}
