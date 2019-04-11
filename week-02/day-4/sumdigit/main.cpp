#include <iostream>

int sumdigit(int);

int main() {

    //Given a non-negative int n, return the sum of its digits recursively (no loops).
    // Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
    // while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

    std::cout << "The digits are 1,2,3." << std::endl;
    std::cout << "The sum of its digits is: " << sumdigit(123) << "." << std::endl;
    return 0;
}

int sumdigit(int n) {
    int sum = 0;
    if (n > 0) {
        sum = n % 10;
        n /= 10;
        sum += sumdigit(n);
    }
    return sum;
}