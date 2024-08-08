#include <iostream>

double arrayMin(double* array, int size){
    if (size <= 1){
        return array[0];
    }
    double min = std::min(array[0], array[1]);
    for (int i = 0; i < size; i++){
        min = std::min(min,array[i]);
    }
    return min;
}