#include <iostream>
#include <string>

void factorio(int, int &);

int main(int argc, char *args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int num1 = 5;
    int num2 = 0;
    factorio(num1, num2);
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}

void factorio(int num1, int &num2) {
    int num3 = 1;
    for (int i = 0; i < num1; ++i) {
        num3 *= i + 1;
    }
    num2 = num3;
}