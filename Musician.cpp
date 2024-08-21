#include "Musician.h"

Musician::Musician(){
    Musician::instrument = "Null";
    Musician::expirence = 0;
}

Musician::Musician(std::string instrument, int experience){
    Musician::instrument = instrument;
    Musician::expirence = experience;
}

std::string Musician::get_instrument(){
    return Musician::instrument;
}

int Musician::get_experience(){
    return Musician::expirence;
}
