//workshop.h
#include <iostream>
#include <cassert>
#include <algorithm>

void changeValue(double * v){
    *v = 42.0;
}

void printArray(double*array, int length){
    std::cout << "[";
    for (int i = 0; i < length; i++){
        std::cout << array[i] ;
        if (i == length-1){
            std::cout << ", ";
        } else{
            std::cout << "]\n";
        }
    }
}

double arrayMax(double*array, int length){
    if (length <= 1) return array[0];
    double maximum = std::max(array[0],array[1]);
    for (int i = 2; i < length; i++){
        maximum = std::max(maximum, array[i]);
    }
    return maximum;
}

double * dynamicArray(int length, double intial){
    double * array = new double[length];
    for (int i = 0; i < length; i++) array[i] = intial;
    return array;
}