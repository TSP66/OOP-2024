#include "Bus.h"

Bus::Bus(int id) : Vehicle(id){}


int Bus::getParkingDuration(){
    return (int) ((time(nullptr)-Bus::timeOfEntry)*75)/100;
}