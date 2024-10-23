#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship: public GameEntity{
    public:
    Ship(int x, int y) : GameEntity(x,y,GameEntityType::ShipType){

    }
    void move(int dx, int dy){
        std::tuple<int, int> pos = Ship::getPos();
        int x = std::get<0>(pos) + dx;
        int y = std::get<1>(pos) + dy;
        Ship::setPosition(x,y);
    }
};

#endif