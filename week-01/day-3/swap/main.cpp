#include <iostream>

int main(int argc, char *args[]) {

    // Swap the values of the variables
    int a = 123;
    int b = 526;

    std::cout << "Value of a before: " << a << std::endl;
    std::cout << "Value of b before: " << b << std::endl;

    std::swap(a, b);
    std::cout << "Value of a now: " << a << std::endl;
    std::cout << "Value of b now: " << b << std::endl;

    return 0;
}