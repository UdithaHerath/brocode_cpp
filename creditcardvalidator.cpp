#include <iostream>
#include <string>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << "Card Number is valid\n";
    } else {
        std::cout << "Card Number is not valid\n";
    }

    return 0;
}

int getDigit(const int number) {
    if (number > 9) {
        return number - 9; // Subtract 9 if the number is greater than 9
    }
    return number; // Otherwise, return the number as is
}

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    // Start from the second-to-last digit (index size-2)
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber) {
    int sum = 0;

    // Start from the last digit (index size-1)
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
        sum += cardNumber[i] - '0'; // Add the digit directly
    }

    return sum;
}