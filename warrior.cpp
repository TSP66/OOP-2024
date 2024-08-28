#include "warrior.h"

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name,health,damage){
    Warrior::weapon = weapon;
}

void Warrior::swingWeapon(Player * opponent){
    std::cout << Warrior::name << " swings their " << Warrior::weapon << " at " << opponent->getName() << "!\n";
    Warrior::attack(opponent,Warrior::damage);
}
