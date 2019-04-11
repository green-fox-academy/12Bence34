#include <iostream>


// Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n power,
// so powerN(3, 2) is 9 (3 squared).

int npower(int number, int power);

int main() {

    std::cout << "Type a number please:" << std::endl;
    int number;
    std::cin >> number;
    if (number <= 0) {
        std::cout << "The number has to be bigger than 0! \nType another number please: " << std::endl;
        std::cin >> number;
    }

    std::cout << "Please give me the power of the number:" << std::endl;
    int power;
    std::cin >> power;

    std::cout << "The result is: " << npower(number, power);

    return 0;
}

int npower(int number, int power) {
    if (power < 1) {
        return 1;
    } else {
        power = power - 1;
        return (number * npower(number, power));

    }
}



