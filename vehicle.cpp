#include "Vehicle.h"
#include <ctime>

//Vehicle::Vehicle(){}

Vehicle::Vehicle(int id){
    Vehicle::ID = id;
    Vehicle::timeOfEntry = time(nullptr);
}

int Vehicle::getID(){
    return Vehicle::ID;
}

int Vehicle::getParkingDuration(){
    return 0;
}