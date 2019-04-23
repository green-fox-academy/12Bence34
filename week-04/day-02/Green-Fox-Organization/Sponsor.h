#ifndef GREEN_FOX_ORGANIZATION_SPONSOR_H
#define GREEN_FOX_ORGANIZATION_SPONSOR_H

#include "Person.h"

class Sponsor : public Person {

public:
    Sponsor();

    Sponsor(std::string name, int age, Gender gender, std::string company);

    void introduce() override;

    void getGoal() override;

    void hire();

private:
    std::string _company;
    int _hiredStudents;

};


#endif
