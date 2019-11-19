#include "Header.h"
#include <iostream>
using namespace std;

int main() {
	Car first(300, 250, "Mazda", "Black", "m6");
	first.mass = 1600;
	first.price = 40000;
	first.get_inf();

	Car second(230, 220, "BMW", "Blue", "m3");
	second.mass = 1700;
	second.price = 30000;
	second.get_inf();

	Car third(500, 300, "Audi", "Green", "RS6");
	third.mass = 2100;
	third.price = 60000;
	third.get_inf();
}

