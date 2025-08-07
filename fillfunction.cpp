#include <iostream>

int main(){

    const int SIZE = 10; 
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/2), "Lolipop");
    fill(foods + (SIZE/2), foods + SIZE, "Toffee");

    for (std::string food : foods){
        std::cout << food << "\n";

    }
}