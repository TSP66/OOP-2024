#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"

class Gradebook{
    private:
    int maxGrades;
    int numGrades;
    Grade * grades;
    public:
    Gradebook();
    Gradebook(int maxGrades);
    bool addGrade(int student_id, int course_id, std::string assigment, int value);
};

#endif