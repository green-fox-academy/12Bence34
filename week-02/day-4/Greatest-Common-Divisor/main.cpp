#include <iostream>

//Find the greatest common divisor of two numbers using recursion.

int divisor(int n1, int n2);

int main() {
    int number1, number2;

    std::cout << "Enter two numbers please: " << std::endl;
    std::cin >> number1 >> number2;

    std::cout << "The greatest common divisor of " << number1 << " and " << number2 << " is: "
              << divisor(number1, number2);

    return 0;
}

int divisor(int number1, int number2) {
    if (number2 != 0)
        return divisor(number2, number1 % number2);
    else
        return number1;
}