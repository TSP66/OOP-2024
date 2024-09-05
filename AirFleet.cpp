#include "AirFleet.h"

//AirVehicle ** fleet;

AirFleet::AirFleet(){
    AirFleet::fleet = new AirVehicle*[5];

    AirFleet::fleet[0] = new Airplane(20,10);
    AirFleet::fleet[1] = new Helicopter(10000,"BlackHawk");
    AirFleet::fleet[2] = new AirVehicle(5000);
    AirFleet::fleet[3] = new Helicopter(100,"WhiteHawk");
    AirFleet::fleet[4] = new Airplane(15,20);

}
AirVehicle ** AirFleet::get_fleet(){
    return AirFleet::fleet;
}