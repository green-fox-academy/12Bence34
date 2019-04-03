#include <iostream>

int main(int argc, char *args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    int resultseconds = 60 - currentSeconds;
    int resultMinutes = (60 - currentMinutes) * 60;
    int resultHours = ((23 - currentHours) * 60) * 60;

    std::cout << "the current time is: " << currentHours << " : " << currentMinutes << " : " << currentSeconds
              << std::endl;
    std::cout << "The remaining seconds are:" << resultseconds + resultMinutes + resultHours << "." << std::endl;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    return 0;
}