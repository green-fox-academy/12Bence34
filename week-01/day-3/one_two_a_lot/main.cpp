#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    int number;
    std::cout <<" Type a number please: "<<std:: endl;
    std::cin>> number;
if (number <=0){
    std::cout<<" Not enough! "<<std:: endl;
}
if (number ==1){
    std::cout<<" One! "<<std::endl;
}
if (number==2){
    std::cout<<" Two "<<std::endl;
}
if (number>2){
    std::cout<<" A lot! "<<std::endl;
}

    return 0;
}