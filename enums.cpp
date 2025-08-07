#include <iostream>

enum Day {sunday, monday};

int main() {

	Day today = monday;

	switch (today)
	{
	case monday: std::cout << "Today is Monday";
		break;
	case sunday: std::cout << "Today is Sunday";
		break;
	default:
		break;
	}

	return 0;
}