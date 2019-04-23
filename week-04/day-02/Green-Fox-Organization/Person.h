#ifndef GREEN_FOX_ORGANIZATION_PERSON_H
#define GREEN_FOX_ORGANIZATION_PERSON_H

#include<string>
#include <iostream>

enum Gender {
    MALE,
    FEMALE,
};


class Person {
public:
    Person();

    Person(std::string name, int age, Gender gender);

    int getAge() const;

    const std::string &getName() const;

    std::string getGender();

    virtual void introduce();

    virtual void getGoal();

private:
    int _age;
    std::string _name;
    Gender _gender;

};


#endif
