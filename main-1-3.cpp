#include <iostream>

extern double* duplicateArray(double* array, int size);

int main(){
    double array[] = {1.0,2.0,5,0};
    double * deuplicate = duplicateArray(array, 3);
    return 0;
}