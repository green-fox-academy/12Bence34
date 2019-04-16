#include <iostream>
#include <fstream>

void DivideBy0(float x, int y);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    int ten = 10;
    std::cout << "Type a number please: " << std::endl;
    float x;
    std::cin >> x;

    DivideBy0(x, ten);
    return 0;
}

void DivideBy0(float x, int y) {
    try {
        if (x == 0) {
            throw 0;
        } else {
            std::cout << "The result of division is: " << (y / x);
        }
    } catch (int f) {
        std::cerr << "fail" << std::endl;
    }

}