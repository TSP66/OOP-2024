#include "Appliance.h"

Appliance::Appliance(){
    Appliance::powerRating = 0;
    Appliance::isOn = false;
}

Appliance::Appliance(int powerRating){
    Appliance::powerRating = powerRating;
    Appliance::isOn = false;
}

void Appliance::turnOn(){
    Appliance::isOn = true;
}
void Appliance::turnOff(){
    Appliance::isOn = false;
}

int Appliance::get_powerRating(){
    return Appliance::powerRating;
}
void Appliance::set_powerRating(int powerRating){
    Appliance::powerRating = powerRating;
}
bool Appliance::get_isOn(){
    return Appliance::isOn;
}
void Appliance::set_isOn(bool isOn){
    Appliance::isOn = isOn;
}

double Appliance::getPowerConsumption(){
    return 0.0;
}