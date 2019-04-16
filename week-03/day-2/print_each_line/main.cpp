#include <iostream>
#include <fstream>
#include<sstream>
#include <string>
#include <exception>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each line from the file.
    // You will have to create the file, you may use C-programming, although it is not mandatory

    std::ofstream FirstFile;                                    //creating a file for writing
    FirstFile.open("../my-file.txt");                                     //opening a file

    if(FirstFile.is_open()) {                                      //checking if it is open
        FirstFile << "Hello World!\n";
        FirstFile <<"This is my first sentence here!\n";
        FirstFile <<"And this is the second!\n";
        FirstFile <<"The last one, I promise.\n";
        FirstFile.close();                                      //file must be closed after writing!
    } else {
        std::cout << "Unable to open file" << std::endl;
    }



    try {
        std::ifstream FirstFile;
        FirstFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
        std::string text;

        FirstFile.open("../my-file.txt");
        getline(FirstFile, text, '.');
        std::cout << text << std::endl;
        FirstFile.close();

    } catch (std::ifstream::failure &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}