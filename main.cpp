#include <iostream>
#include <cassert>
#include <algorithm>

#include "workshop.h"

int main(){
    //Question 2
    double value = 0.0;
    changeValue(&value);
    assert(value == 42.0);

    //Question 3
    double array[] = {1.0,2.0,3.0,4.0};
    printArray(array, 4);

    //Question 4
    double array2[] = {1.0,2.0,3.0,4.0};
    double maximum = arrayMax(array2, 4);
    assert(maximum == 4.0);



}