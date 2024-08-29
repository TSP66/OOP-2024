#include <iostream>
#include "ParkingLot.h"

ParkingLot::ParkingLot(int numVehicles){
    ParkingLot::maxVehicles = numVehicles;
    ParkingLot::numVehicles = 0;
    ParkingLot::spotsFree = new bool[numVehicles];
    ParkingLot::vehicles = new Vehicle*[numVehicles];
    for (int i = 0; i < numVehicles; i++) ParkingLot::spotsFree[i] = true;
}

void ParkingLot::parkVehicle(Vehicle * vehicle){
    if (ParkingLot::maxVehicles == ParkingLot::numVehicles){
        std::cout << "The lot is full" << std::endl;
        return;
    }
    for (int i = 0; i < ParkingLot::maxVehicles; i++){
        if(ParkingLot::spotsFree[i]){
            ParkingLot::vehicles[ParkingLot::numVehicles] = vehicle;
            ParkingLot::spotsFree[i] = false;
            break;
        }
    }
    ParkingLot::numVehicles++;
}

void ParkingLot::unparkVehicle(int ID){
    for (int i = 0; i < ParkingLot::maxVehicles; i++){
        if (!ParkingLot::spotsFree[i]){
            if ((*ParkingLot::vehicles[i]).getID() == ID){
                ParkingLot::numVehicles--;
                ParkingLot::spotsFree[i] = true;
                delete [] ParkingLot::vehicles[i];
                return;
            }
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count = 0;
    for (int i = 0; i < ParkingLot::numVehicles; i++){
        if (!ParkingLot::spotsFree[i]){
            if ((*ParkingLot::vehicles[i]).getParkingDuration() > maxParkingDuration){
                count++;
            }
        }
    }
    return count;
}

ParkingLot::~ParkingLot(){
    delete [] ParkingLot::spotsFree;
    delete [] ParkingLot::vehicles;
}
