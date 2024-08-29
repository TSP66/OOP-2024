#include "Motorbike.h"

Motorbike::Motorbike(int id) : Vehicle(id){}


int Motorbike::getParkingDuration(){
    return (int) ((time(nullptr)-Motorbike::timeOfEntry)*85)/100;
}