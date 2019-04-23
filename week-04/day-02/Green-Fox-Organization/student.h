#ifndef GREEN_FOX_ORGANIZATION_STUDENT_H
#define GREEN_FOX_ORGANIZATION_STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
public:
    Student();

    Student(std::string name, int age, Gender gender, std::string previousOrganization);

    void introduce() override;

    void getGoal() override;

    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
};

#endif
