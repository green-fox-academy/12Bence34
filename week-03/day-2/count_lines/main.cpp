#include <iostream>
#include <fstream>
#include <string>
#include <exception>

int CountLines(std::string File);

int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::ofstream File;
    File.open("../my-file.txt");
    if (File.is_open()) {
        File << "That's the first line.\n";
        File << "And that's the last line.\n";
    } else {
        std::cout << "Unable to open." << std::endl;
    }
    File.close();

    std::string myFile = "../my-file.txt";

    std::cout << CountLines(myFile) << std::endl;

    return 0;
}


int CountLines(std::string File) {
    std::ifstream myFileRead;
    myFileRead.open(File);

    if (myFileRead.is_open()) {
        int row = 0;
        std::string line;
        while (std::getline(myFileRead, line)) {
            row = row + 1;
        }
        return row;
    } else {
        return 0;
    }
}