#ifndef COURSE_H
#define COURSE_H

#include "Person.h"

class Course{
    private:
    int maxPersons;
    int numPersons;
    Person** persons;
    std::string name;
    int id;
    public:
    Course();
    Course(int maxPersons, int id, std::string name);
    bool addPerson(Person p);
    ~Course();
};

#endif