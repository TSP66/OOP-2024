#include <iostream>

int min_element(int array[], int n){
    if (n < 1) return 0;
    else if (n == 1) return *array;
    int min = std::min(array[0],array[1]);
    for (int i = 2; i < n; i++){
        min = std::min(min,array[i]);
    }
    return min;
}