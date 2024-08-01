#include <iostream>

using namespace std;


int array_min(int integers[],int length){
    if (length < 1) return -1;
    int a_min = min(integers[0],integers[1]);
    for (int i = 1; i < length; i++){
        a_min = min(a_min,integers[i]);
    }
    return a_min;
}

int array_max(int integers[],int length){
    if (length < 1) return -1;
    int a_max = max(integers[0],integers[1]);
    for (int i = 1; i < length; i++){
        a_max = max(a_max,integers[i]);
    }
    return a_max;
}


int sum_min_max(int integers[],int length){
    if (length < 1) return -1;
    return array_min(integers,length)+array_max(integers,length);
}