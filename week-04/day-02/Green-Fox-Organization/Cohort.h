#ifndef GREEN_FOX_ORGANIZATION_COHORT_H
#define GREEN_FOX_ORGANIZATION_COHORT_H

#include "student.h"
#include "Mentor.h"
#include <vector>

class Cohort {
public:
    Cohort(std::string);

    void addStudent(Student *);

    void addMentor(Mentor *);

    void info();

private:
    std::string _name;
    std::vector<Student> _students;
    std::vector<Mentor> _mentors;

};

#endif
