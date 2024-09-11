#include "Course.h"

Course::Course(int maxPersons, std::string name, int id) : maxPersons(maxPersons), numPersons(0), name(name), id(id){
    Course::persons = new Person*[maxPersons];
}

Course::Course(){
    
}

bool Course::addPerson(Person p){
    if (Course::maxPersons == Course::numPersons){
        return false;
    }
    Course::persons[Course::numPersons] = &p;
    Course::numPersons++;
    return true;
}

Course::~Course(){
    delete [] Course::persons;
}