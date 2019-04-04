#include <iostream>
#include <string>

int sum(int);

int main(int argc, char *args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter

    int x = 0;
    std::cout << "Please give me a number!" << std::endl;
    std::cin >> x;
    x = sum(x);
    std::cout << x << std::endl;

    return 0;
}

int sum(int a) {
    int b = 0;
    for (int i = 0; i <= a; ++i) {
        b += i;
    }
    return b;

}