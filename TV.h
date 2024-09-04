#include "Appliance.h"

class TV: public Appliance{
    private:
    double screenSize;
    public:
    TV();
    TV(int powerRating, double screenSize);
    void setScreenSize(double screenSize);
    double getScreenSize();
    double getPowerConsumption();
};