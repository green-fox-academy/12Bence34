#include <iostream>

int main(int argc, char *args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user

    std::string whatsyourname;
    std::cout << "What is your name?";
    std::cin >> whatsyourname;
    std::cout << "Hello " << whatsyourname << "!"<< std::endl;

    return 0;
}