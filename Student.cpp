#include "Student.h"

Student::Student(std::string name, int id) : Person(name){
    Student::id = id;
}
int Student::get_id(){
    return Student::id;
}
void Student::set_id(int id){
    Student::id = id;
}