#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <string.h>

#include "Course.h"
#include "Gradebook.h"


class University{
    private: 
    std::string name;
    std::string location;
    Course * courses;
    Gradebook * gradebooks;
    int maxCourses;
    int numCourses;
    public:
    University(int maxCourses, std::string name, std::string location);
    bool addCourse(int id, std::string name);
    ~University();
};

#endif