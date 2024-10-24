#ifndef ROBOT_H
#define ROBOT_H

#include "GridItem.hpp"

class Robot: public GridItem{
    private:
    int health; 
    public:
    Robot(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight){
        Robot::health = 3;
    }
    int getHealth(){
        return Robot::health;
    }
    void takeHit(){
        if (Robot::health > 0){
            Robot::health--;
        }
    }
    bool move(int xOffset, int yOffset){
        if (Robot::coords.first + xOffset >= Robot::width){
            return false;
        }
        if (Robot::coords.second + yOffset >= Robot::height){
            return false;
        }
        if (Robot::coords.first + xOffset < 0){
            return false;
        }
        if (Robot::coords.second + yOffset < 0){
            return false;
        }
        if ((xOffset != 0) && (yOffset != 0)){
            Robot::coords.first += xOffset;
            Robot::coords.second += yOffset;
            return true;

        } else {
            return false;
        }
    }
};

#endif