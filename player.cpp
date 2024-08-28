#include "player.h"

Player::Player(std::string name, int health, int damage){
    Player::name = name;
    Player::health = health;
    Player::damage = damage;
}

void Player::attack(Player * opponent, int damage){
    (*opponent).takeDamage(damage);
}

void Player::takeDamage(int damage){
    Player::health -= damage;
    std::cout << Player::name << " takes " << damage << " damage. Remaining health: " << Player::health << "\n";
}

std::string Player::getName(){
    return Player::name;
}

int Player::getHealth(){
    return Player::health;
}