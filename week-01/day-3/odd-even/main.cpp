#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int number;
    std::cout<<"Type a number please:";
    std::cin>>number;
if((number % 2)<= 0){
    std::cout<<" Your number is Even. "<<std::endl;
}
else{
    std::cout<<" Your number is Odd. "<<std::endl;
}


    return 0;
}