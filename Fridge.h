#include "Appliance.h"

class Fridge: public Appliance{
    private:
    double volume;
    Fridge();
    Fridge(int powerRating, double volume);
    void setVolume(double volume);
    double getVolume();
    double getPowerConsumption();


};