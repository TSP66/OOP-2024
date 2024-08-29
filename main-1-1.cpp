#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "motorbike.h"
#include "bus.h"

int main(void){

    int buses, cars, motorbikes;
    std::cout << "Number of buses: "; 
    std::cin >> buses;
    std::cout << "Number of cars: "; 
    std::cin >> cars;
    std::cout << "Number of motorbikes: "; 
    std::cin >> motorbikes;

    Vehicle ** vehicles = new Vehicle*[buses+cars+motorbikes];

    for(int i = 0; i < buses; i++){
        vehicles[i] = new Bus(i);
    }
    for(int i = 0; i < cars; i++){
        vehicles[i+buses] = new Bus(i+buses);
    }
    for(int i = 0; i < motorbikes; i++){
        vehicles[i+buses+cars] = new Bus(i+buses+cars);
    }
    for (int i = 0; i < buses+cars+motorbikes; i++){
        std::cout << (*vehicles[i]).getParkingDuration() << std::endl;
    }

    return 0;
}