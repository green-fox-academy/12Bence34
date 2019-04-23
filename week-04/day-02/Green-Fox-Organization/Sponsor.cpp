#include "Sponsor.h"

Sponsor::Sponsor() : Person() {
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) : Person(name, age, gender) {
    _company = company;
    _hiredStudents = 0;
}

void Sponsor::introduce() {
    std::cout << "Hello, my name is " << getName() << " and I'm a " << getAge() << " years old " << getGender();
    std::cout << " who represents " << _company << " and hired " << _hiredStudents << " students so far.";
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents++;
}