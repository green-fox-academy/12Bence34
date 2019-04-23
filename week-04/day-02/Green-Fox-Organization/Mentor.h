#ifndef GREEN_FOX_ORGANIZATION_MENTOR_H
#define GREEN_FOX_ORGANIZATION_MENTOR_H

#include <string>
#include "Person.h"

enum Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();

    Mentor(std::string name, int age, Gender gender, Level level);

    std::string getRealLevel();

    void getGoal() override;

    void introduce() override;


private:
    Level _level;


};


#endif
