#include "Person.h"

Person* createPersonArray(int n){
    Person * persons = new Person[n];
    for (int i = 0; i < n; i++){      
        persons[i].name = "Jane Doe";
        persons[i].age = 1;
    }
    return persons;
}

PersonList createPersonList(int n){
    PersonList plist;
    plist.people = createPersonArray(n);
    plist.numPeople = n;
    return plist;
}