#include <iostream>

int array[] = {1,2,3,4,5};

extern double array_mean(int array[], int n);

int main(){
    double mean = array_mean(array, 5);
    std::cout << mean << std::endl;
    return 0;
}