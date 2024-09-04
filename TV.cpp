#include "TV.h"

TV::TV(){
    TV::screenSize = 0.0;
}
TV::TV(int powerRating, double screenSize){
    TV::powerRating = powerRating;
    TV::screenSize = screenSize;
}

void TV::setScreenSize(double screenSize){
    TV::screenSize = screenSize;
}
double TV::getScreenSize(){
    return TV::screenSize;
}
double TV::getPowerConsumption(){
    return (double) TV::powerRating * (TV::screenSize/10.0);
}