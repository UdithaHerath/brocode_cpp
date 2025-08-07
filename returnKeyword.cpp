#include <iostream>

double square(double length);
double cube(double length);
std::string concatNames(std::string firstName, std::string lastName);

int main(){

    double length = 2.0;
    double area = square(length);
    double volume = cube(length);

    std::string firstName = "Saman";
    std::string lastName = "Kumara\n";

    std::cout << concatNames(firstName,lastName);
    
    std::cout << area << '\n' << volume;

    return 0;
}

double square(double length){

    return length * length;
}

double cube(double length){

    return length* length * length;
}

std::string concatNames(std::string firstName, std::string lastName){
    return firstName + " " + lastName;
}