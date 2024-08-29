#include <iostream>
#include <memory>
#include "ParkingLot.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"

int main(){
    ParkingLot lot(10);
    std::cout << "0 for Car, 1 for Bus, 2 for Motorbike" << std::endl;
    for (int i = 0; i < 10; i++){
        int input;
        std::cin >> input;
        switch (input) {
            case 0: {
                lot.parkVehicle(new Car(i));
                break;
            }
            case 1: {
                lot.parkVehicle(new Bus(i));
                break;
            }
            default: {
                lot.parkVehicle(new Motorbike(i));
                break;
            }
        }
    }
    int ID;
    std::cout << "Select ID to remove: ";
    std::cin >> ID;
    lot.unparkVehicle(ID);
    return 0;
}