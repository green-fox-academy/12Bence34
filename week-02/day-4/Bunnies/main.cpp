#include <iostream>

//We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int count(int ears, int bunnies);

int main() {

    int ears = 2;
    int bunnies;
    std::cout << "How many bunnies do we have?" << std::endl;
    std::cin >> bunnies;

    std::cout << "The " << bunnies << " bunnies have " << count(ears, bunnies) << " ears." << std::endl;
    return 0;
}

int count(int ears, int bunnies) {
    if (bunnies < 1)
        return 0;
    return ears + count(ears, (bunnies - 1));
}