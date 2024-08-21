#include "Orchestra.h"
#include "Musician.h"

Orchestra::Orchestra(){
    Orchestra::size = 0;
    Orchestra::nMusicians = 0;
    Orchestra::members = new Musician[0];
}
Orchestra::Orchestra(int size){
    Orchestra::size = size;
    Orchestra::members = new Musician[size];
    Orchestra::nMusicians = 0;
}   // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members(){
    return Orchestra::nMusicians;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument){
    for (int i = 0; i < Orchestra::nMusicians; i++){
        if (Orchestra::members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false;
} 

Musician *Orchestra::get_members(){
    return Orchestra::members;
}        // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician){
    if (Orchestra::nMusicians+1 >= Orchestra::size) return false;
    Orchestra::members[Orchestra::nMusicians] = new_musician;
    Orchestra::nMusicians++;
    return true;
}

Orchestra::~Orchestra(){
    delete [] Orchestra::members;
}