#include <iostream>
#include "parkinglot.h"
#include "car.h"
#include "motorbike.h"
#include "bus.h"

int main(){
    ParkingLot lot(10);
    std::cout << "0 for Car, 1 for Bus, 2 for Motorbike" << std::endl;
    for (int i = 0; i < 10; i++){
        int input;
        std::cin >> input;
        switch (input){
            case 0:
            Car * car = new Car(i);
            lot.parkVehicle(car);
            break;
            case 1:
            Bus * bus = new Bus(i);
            lot.parkVehicle(bus);
            break;
            default:
            Motorbike * motorbike = new Motorbike(i);
            lot.parkVehicle(motorbike);
            break;
        }
    }
    int ID;
    std::cout << "Select ID to remove: ";
    std::cin >> ID;
    lot.unparkVehicle(ID);
    return 0;
}