#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student: public Person{
    private:
    int id;
    public:
    Student(std::string name, int id);
    int get_id();
    void set_id(int id);
};


#endif

