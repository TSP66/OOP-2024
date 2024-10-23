#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <math.h>

class Utils{
    public:

    Utils(){

    }

    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        return std::make_tuple(std::rand()%gridWidth,std::rand()%gridHeight);
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        return std::sqrt(std::pow((std::get<1>(pos1)-std::get<1>(pos2)),2.0)+std::pow(std::get<0>(pos1)-std::get<0>(pos2),2.0));
    }

};


#endif