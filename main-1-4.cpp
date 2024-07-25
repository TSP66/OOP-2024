#include <iostream>

int array[] = {1,2,3,4,5};
int secondarray[] = {1,2,3,4,5};

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int mean = sum_two_arrays(array, secondarray, 5);
    std::cout << mean << std::endl;
    return 0;
}