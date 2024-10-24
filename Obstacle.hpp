#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Obstacle: public Interactable{
    public:
    Obstacle(int x, int y, int width, int height) : Interactable(x, y, width, height){
        
    }
    bool interact(Robot* player) {
        if (Helper::euclideanDistance(Interactable::coords, player->getCoordinates()) == 0.0){
            player->takeHit();
            if (player->getHealth() == 0) return true;
        }

        return false;
    }
    InteractableType getType(){
        return InteractableType::OBSTACLE;
    }
};

#endif