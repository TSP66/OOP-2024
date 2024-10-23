#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple> 

enum GameEntityType{
    ExplosionType, 
    MineType,
    NoneType, 
    ShipType
};

class GameEntity{
    private:
    std::tuple<int, int> position;
    GameEntityType type;
    public:
    GameEntity(){
        GameEntity::position = std::make_tuple(0,0);
        GameEntity::type = NoneType;
    }
    GameEntity(int x, int y, GameEntityType type){
        GameEntity::position = std::make_tuple(x,y);
        GameEntity::type = type;
    }
    std::tuple<int, int> getPos(){
        return GameEntity::position;
    }
    GameEntityType getType(){
        return GameEntity::type;
    }
    void setPosition(int x, int y){
        GameEntity::position = std::make_tuple(x,y);
    }
    void setType(GameEntityType type){
        GameEntity::type = type;
    }
};

#endif