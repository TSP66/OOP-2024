#include "Person.h"

Person::Person(std::string name){
    Person::name = name;
}
std::string Person::get_name(){
    return Person::name;
}
 void Person::set_name(std::string name){
    Person::name = name;
 }