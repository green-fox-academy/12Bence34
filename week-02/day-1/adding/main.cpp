#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *PointerA = &a;
    int *PointerB = &b;
    int add = 0;
    add = *PointerA + *PointerB;

    std::cout<<"The result of adding a + b is: "<<add<< "."<<std::endl;


    return 0;
}