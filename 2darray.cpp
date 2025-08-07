#include <iostream>

int main(){	

    std::string cars[][3] = {{"Mustang", "Escape", "F- 100"},
                            {"Covette", "Equinox", "silvero"},
                            {"Challenger", "Ducado", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns ; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << "\n";
    }
    
}
