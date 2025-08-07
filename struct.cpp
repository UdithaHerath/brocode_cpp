#include <iostream>

struct Student
{
	std::string name;
	int age;
	bool enrolled;
};

int main() {

	Student student1;
	student1.name = "Kamal";
	student1.age = 23;
	student1.enrolled = true;

	std::cout << student1.age << '\n';

	return 0;
}