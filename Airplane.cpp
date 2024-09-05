#include "Airplane.h"

//int numPassengers

Airplane::Airplane(){

}
Airplane::Airplane(int w, int p) : AirVehicle(w){
    Airplane::numPassengers = p;
}
void Airplane::reducePassengers(int x){
    Airplane::numPassengers -= x;
    if(Airplane::numPassengers < 0){
        Airplane::numPassengers = 0;
    }
}
int Airplane::get_numPassengers(){
    return Airplane::numPassengers;
}
void Airplane::fly(int headwind, int minutes){
    float delta_fuel;
    if (headwind > 60){
        delta_fuel -= (float) minutes *(0.5+0.001*(float) Airplane::numPassengers);
    } else {
        delta_fuel -= minutes*(0.25+0.001* (float) Airplane::numPassengers);
    }
    if (Airplane::fuel-delta_fuel < 20.0){
        return;
    }
    else{
        Airplane::fuel-=delta_fuel;
        Airplane::numberOfFlights++;
    }
}