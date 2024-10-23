#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine: public GameEntity{
    public:
    Mine(int x, int y) : GameEntity(x, y, GameEntityType::MineType){

    }

    Explosion explode(){
        Mine::setType(GameEntityType::NoneType);
        std::tuple<int,int> pos = Mine::getPos();
        return Explosion(std::get<0>(pos),std::get<1>(pos));
    }
};


#endif