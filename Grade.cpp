#include "Grade.h"

Grade::Grade(int student_id, std::string assigment, int value) : student_id(student_id), assigment(assigment), value(value) {

}

Grade::Grade(){

}

int Grade::get_student_id(){
    return Grade::student_id;
}
void Grade::set_student_id(int student_id){
    Grade::student_id = student_id;
}
std::string Grade::get_assigment(){
    return Grade::assigment;
}
void Grade::set_assigment(std::string assigment){
    Grade::assigment = assigment;
}
int Grade::get_value(){
    return Grade::value;
}
void Grade::set_value(int value){
    Grade::value = value;
}

int Grade::get_course_id(){
    return Grade::course_id;
}
void Grade::set_course_id(int course_id){
    Grade::course_id = course_id;
}