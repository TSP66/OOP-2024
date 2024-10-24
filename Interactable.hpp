#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType{
    GOAL,
    OBSTACLE
};

class Interactable: public GridItem{
    public:
    static int interactables;

    Interactable() : GridItem(0, 0, 0, 0) {
        Interactable::interactables++;
    }
    Interactable(int x, int y, int width, int height) : GridItem(0, 0, width, height){
        Interactable::interactables++;
    }

    int getActiveInteractableCount() {
        return Interactable::interactables;
    }

    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() = 0;

    ~Interactable(){
        Interactable::interactables--;
    }
};

int Interactable::interactables = 0;

#endif
