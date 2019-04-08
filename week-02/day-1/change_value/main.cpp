#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;

    std::cout<<"The  original temperature is: "<< temperature <<std::endl;

    float *PointTemperature = &temperature;
    *PointTemperature = 22.5;
    std::cout<< "The new temperature value is: "<<*PointTemperature<<std:: endl;
    return 0;
}