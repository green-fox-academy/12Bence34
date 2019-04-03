#include <iostream>

int main(int argc, char *args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int distance;
    std::cout << "What distance comes to your mind in km?";
    std::cin >> distance;
    std::cout << distance << "km comes to my mind. \n";

    double miles;
    miles = distance * 0.6214;
    std::cout << "And your distance is " << miles << " miles.";


    return 0;

}