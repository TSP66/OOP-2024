#include <iostream>

int max_element(int array[], int n){
    if (n < 1) return 0;
    else if (n == 1) return *array;
    int max = std::max(array[0],array[1]);
    for (int i = 2; i < n; i++){
        max = std::max(max,array[i]);
    }
    return max;
}