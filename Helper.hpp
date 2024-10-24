#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <utility>
#include <math.h>

class Helper{
    public:
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        double x_s = std::pow(((double) item1.first - (double) item2.first),2.0);
        double y_s = std::pow(((double) item1.second - (double) item2.second),2.0);
        return std::pow(x_s+y_s,0.5);
    }
};

#endif