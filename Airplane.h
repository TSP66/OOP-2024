#include "AirVehicle.h"

class Airplane: public AirVehicle{
    private:
    int numPassengers;
    public:
    Airplane();
    Airplane(int w, int p);
    void reducePassengers(int x);
    int get_numPassengers();
    void fly(int headwind, int minutes);
    void set_numPassengers(int value);
};