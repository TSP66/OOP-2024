#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{
    private:
    Vehicle ** vehicles;
    bool * spotsFree;
    int maxVehicles;
    int numVehicles;
    public:
    ParkingLot(int numVehicles);
    void parkVehicle(Vehicle * vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
    ~ParkingLot();
};

#endif