#include "Mentor.h"

Mentor::Mentor() : Person() {
    _level = INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person(name, age, gender) {
    _level = level;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hello, my name is " << getName() << " and I'm a " << getAge() << " years old " << getGender();
    std::cout << " " << getRealLevel() << " mentor." << std::endl;
}

std::string Mentor::getRealLevel() {
    switch (_level) {
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
    }
}
