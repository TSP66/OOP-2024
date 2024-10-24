#ifndef GOAL_H
#define GOAL_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal: public Interactable{
    public:
    Goal(int width, int height) : Interactable(width-1, height-1, width, height){

    }
    bool interact(Robot* player) {
        return Helper::euclideanDistance(Interactable::coords, player->getCoordinates()) == 0.0;
    }
    InteractableType getType(){
        return InteractableType::GOAL;
    }
};

#endif