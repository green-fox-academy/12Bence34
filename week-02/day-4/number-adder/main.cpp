#include <iostream>

void Addnumber(int n);

int main() {

    //Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

    int n;

    std::cout << "Type a number please: " << std::endl;
    std::cin >> n;
    std::cout << " " << std::endl;

    Addnumber(n);

    return 0;
}

void Addnumber(int n) {
    if (n < 1)
        return;
    Addnumber(n - 1);
    std::cout << n << std::endl;

}