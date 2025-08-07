#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << " *** TEMPERATURE CONVERTION ***  " << '\n';
    std::cout << " F = Faranheit " << '\n';
    std::cout << " C = Celcius " << '\n';
    std::cout << " What Temperature you want to Convert to: ";
    std::cin >> unit;

    if(unit == 'C' || unit == 'c'){
        
        std::cout << " Enter Temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = temp *2;

        std::cout << " Temperature in Celcious: " << temp << " C" << '\n';
    }
    else if( unit == 'F' || unit == 'f'){

        std::cout << " Enter Temperature in Celcius: ";
        std::cin >> temp;
        temp = temp *3;

        std::cout << " Temperature in Fahrenheit: " << temp << " F" << '\n';
    }
    else{
        std::cout << " Enter a valid Character 'F' or 'C' \n";
    }


    std::cout << " ****************************** ";
    

    return 0;
}
