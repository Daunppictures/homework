#ifndef LABA4_CAR_H
#define LABA4_CAR_H
#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
	int engine_power, top_speed;
	string car_brand;
protected:
	string colour;
	string model;
public:
	double mass;
	int price;

	Car();
	Car(int a_engine_power,  int a_top_speed,  string a_car_brand, string a_colour, string a_model);
	int getEngine_power();
	int getTop_speed();
	string getCar_brand();
	string getColour();
	string getModel();
	void get_inf();
	~Car();
};
#endif

