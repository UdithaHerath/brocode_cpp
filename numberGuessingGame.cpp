#include <iostream>
#include <ctime>

int main(){

    int ranNum, guess, tries;
    tries = 0;
    srand(time(NULL));

    ranNum = (rand() % 100 ) +1;

    std::cout << "*** NUMBER GUESSING GAME ***\n";
    do{

        std::cout << " Enter a number between (1-100): ";
        std::cin >> guess;
        tries++;
        
        if(guess < ranNum ){
            std::cout << "Enter a higher value!\n" ;
        }
        else if(guess > ranNum){
            std::cout << "Enter a lower value!\n" ;
        }
        else{
            std::cout << "Correct YOU WIN \n Number of tries: " << tries;
        }

    }while(guess != ranNum);

    std::cout << "\n*******************************";


    return 0;

}