#include "Gradebook.h"

Gradebook::Gradebook(){
    
}

Gradebook::Gradebook(int maxGrades) : maxGrades(maxGrades), numGrades(0) {
    Gradebook::grades = new Grade[maxGrades];
}
bool Gradebook::addGrade(int student_id, int course_id, std::string assigment, int value) {
    if (Gradebook::numGrades == Gradebook::maxGrades){
        return false;
    }
    Gradebook::grades[Gradebook::numGrades].set_student_id(student_id);
    Gradebook::grades[Gradebook::numGrades].set_assigment(assigment);
    Gradebook::grades[Gradebook::numGrades].set_value(value);
    Gradebook::grades[Gradebook::numGrades].set_course_id(course_id);

    Gradebook::numGrades++;
    return true;
}