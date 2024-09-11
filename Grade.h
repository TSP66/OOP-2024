#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string.h>

class Grade{
    private:
    int student_id;
    std::string assigment;
    int value;
    int course_id;
    public:
    Grade();
    Grade(int student_id, std::string assigment, int value);
    int get_student_id();
    void set_student_id(int);
    std::string get_assigment();
    void set_assigment(std::string);
    int get_value();
    void set_value(int);
    int get_course_id();
    void set_course_id(int);
};

#endif