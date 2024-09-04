#include "Fridge.h"

Fridge::Fridge(){

}
Fridge::Fridge(int powerRating, double volume){
    Fridge::powerRating = powerRating;
    Fridge::volume = volume;
}

void Fridge::setVolume(double volume){
    Fridge::volume = volume;
}

double Fridge::getVolume(){
    return Fridge::volume;
}
double Fridge::getPowerConsumption(){
    return (double) powerRating * 24.0 * (volume/100.0);
}

