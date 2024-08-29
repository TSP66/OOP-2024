#include "Car.h"

Car::Car(int id) : Vehicle(id){}


int Car::getParkingDuration(){
    return (int) ((time(nullptr)-Car::timeOfEntry)*90)/100;
}