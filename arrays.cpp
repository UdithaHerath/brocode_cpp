#include <iostream>

int main(){

    std::string flowers[]= {"Lotus", "Nelum", "Kumudu", "Nimal", "Hasun", "Peththa"};
    std::string names[]={"Kaml"};

    std::cout << sizeof(std::string) << "\n";

    std::cout << sizeof(flowers)/sizeof(flowers[0]) << "  characters\n";

    int elements = sizeof(flowers)/sizeof(flowers[0]);

    for(int i =0 ; i < elements ; i++){
        std::cout << flowers[i] << "\n";
    }
}