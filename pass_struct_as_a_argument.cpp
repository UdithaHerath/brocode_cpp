#include <iostream>

struct cars {
	std::string model;
	int year;
	std::string colour;
};
void printCar(cars &Car);
int main() {

	cars car1;
	cars car2;

	car1.model = "Covellet";
	car1.year = 2004;
	car1.colour = "Blue";

	car2.model = "Mustang";
	car2.year = 2012;
	car2.colour = "Yellow";

	std::cout << &car1 << '\n';
	printCar(car1);

	return 0;
}

void printCar(cars &Car) {

	std::cout << &Car << '\n';
	std::cout << Car.model << '\n';
	std::cout << Car.year << '\n';
	std::cout << Car.colour << '\n';
}