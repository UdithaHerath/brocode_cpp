#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do{
        
        std::cout << "****************************************\n";
        std::cout << "Enter Your Choice: \n";
        std::cout << "****************************************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                    showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;
            case 4: std::cout << "Thanks for Visiting....\n"; 
                break;
            default: std::cout << "Invalid Choice\n";
                break;
        }
    }while(choice != 4 || choice );


    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance is: $ " << std::setprecision(2)<< std::fixed << balance << '\n';
}
double deposit(){
    double amount;
    std::cout << " Enter the amount you want to deposit: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }else{
        std::cout << " That is not a valid amount ! \n1";
        return 0;
    }
    
}
double withdraw(double balance){
    
    double amount = 0;

    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient balance!\n";
        return 0;
    }else if(amount < 0){
        std::cout << "That is not a valid amount\n";
        return 0;
    }else{
        return amount;
    }
    
    return amount;
}