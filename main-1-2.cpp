#include <iostream>

extern void modifyArray(double* array, int size, double value);

int main(){
    double array[] = {1.0,2.0,5,0};
    modifyArray(array, 3, 2.0);
    return 0;
}