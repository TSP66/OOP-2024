#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet{
    private:
    AirVehicle ** fleet;
    public:
    AirFleet();
    AirVehicle ** get_fleet();
};