#include "Appliance.h"

class House{
    private:
    int numAppliances;
    Appliance ** appliances;
    int curAppliances;
    public:
    House();
    House(int numAppliances);
    bool addAppliance(Appliance * appliance);
    double getTotalPowerConsumption();

};