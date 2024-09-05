#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle{
    protected:
    int weight;
    float fuel;
    int numberOfFlights;
    public:
    AirVehicle();
    AirVehicle(int w);
    void refuel();
    virtual void fly(int headwind, int minutes);
    int get_weight();
    void set_weight(int new_weight);
    float get_fuel();
    void set_fuel(float new_fuel);
    int get_numberOfFlights();
    void set_numberOfFlights(int nOF);
};

#endif