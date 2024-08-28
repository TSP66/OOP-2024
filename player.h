#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string.h>

class Player{
    protected:
    std::string name;
    int health;
    int damage;
    public:
    Player(std::string name, int health, int damage);
    void attack(Player * opponent, int damage);
    void takeDamage(int damage);
    std::string getName();
    int getHealth();
};

#endif