#include "AirVehicle.h"

//int weight;
//float fuel;
//int numberOfFlights;

AirVehicle::AirVehicle(){
}
AirVehicle::AirVehicle(int w){
    AirVehicle::weight = w;
    AirVehicle::numberOfFlights = 0;
    AirVehicle::fuel = 100.0;
}
void AirVehicle::refuel(){
    AirVehicle::fuel = 100.0;
}
void AirVehicle::fly(int headwind, int minutes){
    AirVehicle::numberOfFlights++;
}

int AirVehicle::get_weight(){
    return AirVehicle::weight;
}
void AirVehicle::set_weight(int new_weight){
    AirVehicle::weight = new_weight;
}
float AirVehicle::get_fuel(){
    return AirVehicle::fuel;
}
void AirVehicle::set_fuel(float new_fuel){
    AirVehicle::fuel = new_fuel;
}
int AirVehicle::get_numberOfFlights(){
    return AirVehicle::numberOfFlights;
}
void AirVehicle::set_numberOfFlights(int nOF){
    AirVehicle::numberOfFlights = nOF;
}