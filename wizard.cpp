#include "player.h"
#include "wizard.h"

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name,health,damage){
    Wizard::mana = mana;
}

void Wizard::castSpell(Player * opponent){
    std::cout << Wizard::name << " casts a spell on " << opponent->getName() << " for " << Wizard::mana << " damage.\n";
    Wizard::attack(opponent,Wizard::mana);
}
