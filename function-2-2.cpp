#include <iostream>
#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits){
    int sum = 0;
    for (int i = number_of_digits-1; i >= 0; i++){
        sum += binary_digits[0] * pow(2, i);
    }
    return sum;
}