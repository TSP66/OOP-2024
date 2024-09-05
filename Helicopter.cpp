#include "Helicopter.h"
#include <iostream>
#include <string>

Helicopter::Helicopter(int w, std::string n) : AirVehicle(w){
    Helicopter::name = n;
}
void Helicopter::fly(int headwind, int minutes){
    int extraWeight = 5690 - Helicopter::weight;
    float delta_fuel;
    if (extraWeight < 0) 
        extraWeight = 0;
    if (headwind >= 40){
        delta_fuel = (float) minutes * (0.4+0.01*(float) extraWeight);
    } else {
        delta_fuel = (float) minutes * (0.4+0.01*(float) extraWeight);
    }
    if (Helicopter::fuel-delta_fuel < 20.0){
        return;
    }
    else{
        Helicopter::fuel-=delta_fuel;
        Helicopter::numberOfFlights++;
    }
}

std::string Helicopter::get_name(){
    return Helicopter::name;
}
void Helicopter::set_name(std::string name){
    Helicopter::name = name;
}