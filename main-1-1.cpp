#include <iostream>

extern double arrayMin(double* array, int size);

int main(){
    double array[] = {1.0,2.0,5,0};
    double min = arrayMin(array, 3);
    std::cout << min << std::endl;
    return 0;
}