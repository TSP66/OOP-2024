#include "House.h"

House::House(){
    House::numAppliances = 0;
    House::curAppliances = 0;
}
House::House(int numAppliances){
    House::curAppliances = 0;
    House::numAppliances = numAppliances;
    House::appliances = new Appliance*[numAppliances];
}
bool House::addAppliance(Appliance * appliance){
    if (House::curAppliances < House::numAppliances){
        House::appliances[House::curAppliances] = appliance;
        House::curAppliances++;
        return true;
    }
    return false;
}
double House::getTotalPowerConsumption(){
    double totalPower = 0.0;
    for (int i = 0; i < House::curAppliances; i++){
        totalPower += House::appliances[i]->getPowerConsumption();
    }
    return totalPower;
}