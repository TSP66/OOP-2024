#ifndef GAME_H
#define GAME_H

#include "GameEntity.h"
#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include "Utils.h"
#include <iostream>
#include <memory>
#include <vector>

class Game{
    private:
    std::vector<GameEntity*> entities;
    std::vector<Ship*> ships;
    std::vector<Mine*> mines;
    int Ships;
    public:
    Game(){
        
    }
    std::vector<GameEntity*> get_entities(){
        return Game::entities;
    }
    void set_entities(std::vector<GameEntity*> entities){
        Game::entities = entities;
    }
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){

        Game::Ships = numShips;

        std::srand(std::time(0));

        for (int i = 0; i < numShips; i++){
            std::tuple<int,int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
            Ship* newShip = new Ship(std::get<0>(pos),std::get<1>(pos));
            Game::entities.push_back(newShip);
            Game::ships.push_back(newShip);
        }

        for (int i = 0; i < numMines; i++){
            std::tuple<int,int> pos = Utils::generateRandomPos(gridWidth,gridHeight);
            Mine* newMine = new Mine(std::get<0>(pos),std::get<1>(pos));
            Game::entities.push_back(newMine);
            Game::mines.push_back(newMine);
        }

        return Game::entities;
    }

    void gameLoop(int maxIterations, double mineDistanceThreshold){
        for (int i = 0; i < maxIterations; i++){
            for (auto ship : Game::ships){
                if (ship->getType() == GameEntityType::ShipType){
                    ship->move(1,0);
                    for (auto mine : Game::mines){
                        if (mine->getType() == MineType){
                            if (Utils::calculateDistance(ship->getPos(), mine->getPos()) < mineDistanceThreshold){
                                mine->explode();
                                ship->setType(GameEntityType::NoneType);
                                if (--Game::Ships == 0){
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
};

#endif