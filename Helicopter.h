#include <iostream>
#include <string>

#include "AirVehicle.h"

class Helicopter: public AirVehicle{
    private:
    std::string name;
    public:
    Helicopter(int w, std::string n);
    void fly(int headwind, int minutes);
    std::string get_name();
    void set_name(std::string name);
};