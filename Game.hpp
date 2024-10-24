#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Robot.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Obstacle.hpp"

enum GameState{
    WIN,
    LOSE,
    PLAYING,
};

class Game{
    private:
    Robot * player;
    Goal * goal;
    GameState state;
    int width;
    int height;
    std::vector<Obstacle*> obs;

    public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates){
        Game::player = new Robot(width,height);
        Game::goal = new Goal(width, height);
        Game::state = PLAYING;
        Game::width = width;
        Game::height = height;
        for (auto pair : obstacleCoordinates){
            obs.push_back(new Obstacle(pair.first, pair.second ,width, height));
        }

    }
    bool displayState(){
        switch (Game::state){
            case WIN:
            std::cout << "You win!";
            return true;
            break;
            case LOSE:
            std::cout << "You lose :(";
            return true;
            break;
            case PLAYING:
            std::cout << "Game on";
            return false;
            break;
        }
    }

    void movePlayer(int dx, int dy){
        Game::player->move(dx,dy);
        std::pair<int, int> winPos(Game::width-1,Game::height-1);
        if (Game::state == PLAYING){
            if (Game::player->getCoordinates() == winPos){
                Game::state = WIN;
            }
            if (Game::player->getHealth() == 0){
                Game::state = LOSE;
            }
        }
    }
    void printGrid(){
        for (int x = 0; x < Game::width; x++){
            for (int y = 0; y < Game::width; y++){
                std::pair<int, int> position(x,y);
                char element = '_';
                for (auto ob : Game::obs){
                    if (ob->getCoordinates() == position){
                        element = 'O';
                    }
                }
                if (Game::goal->getCoordinates() == position){
                    element = 'G';
                }
                if (Game::player->getCoordinates() == position){
                    element = 'P';
                }
            }
            std::cout << "\n";
        }
    }
};


#endif