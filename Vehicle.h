#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <ctime>

class Vehicle{
    private:
    int ID;
    protected:
    std::time_t timeOfEntry;
    public:
    //Vehicle();
    Vehicle(int id);
    int getID();
    virtual int getParkingDuration();
};

#endif