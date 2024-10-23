#include "Game.h"

int main(){
    Game myGame;
    myGame.initGame(5,5,100,100);
    myGame.gameLoop(10,0.1);
    return 0;
}