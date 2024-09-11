#include <iostream>
#include <string.h>

#ifndef PERSON_H
#define PERSON_H

class Person{
    private:
    std::string name;
    public:
    Person(std::string name);
    std::string get_name();
    void set_name(std::string name);
};

#endif