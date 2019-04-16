#include <iostream>
#include <fstream>
#include <string>


int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile("../my-file.txt");               //<-- Open a file called "my-file.txt".
    if (myFile.is_open()) {
        myFile << "Bence Vanyur" << std::endl;           //<-- Write your name in it as a single line.
        myFile.close();
    } else {
        std::cout << "The file is not open!" << std::endl;
    }

    return 0;
}