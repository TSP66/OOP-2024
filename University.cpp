#include "University.h"

University::University(int maxCourses, std::string name, std::string location) : maxCourses(maxCourses), name(name), location(location), numCourses(0){
    University::courses = new Course[maxCourses];
    University::gradebooks = new Gradebook[maxCourses];
}
bool University::addCourse(int id, std::string name){
    if(University::numCourses == University::maxCourses){
        return false;
    }
    //University::courses[University::numCourses] = Course(10, id, name);
    //University::gradebooks[University::numCourses] = Gradebook(10);
    return true;
}

University::~University(){
    delete [] University::courses ;
    delete [] University::gradebooks;
}