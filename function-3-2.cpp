#include <algorithm>
#include <iostream>

int median_array(int array[], int n){
    std::sort(array, array + n);
    return array[n/2];
}

