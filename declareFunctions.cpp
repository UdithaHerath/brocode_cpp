#include <iostream>

void happyBirthday(std::string name, int number);

int main(){

    std::string name = "Kamal";
    int number = 7;
    happyBirthday(name, number);

    return 0;
}

void happyBirthday(std::string name, int number){
    std::cout << "Happy Birthday " << name << "\nYou are " << number << " Years old\n";
}