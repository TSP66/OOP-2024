#include <iostream>

int array[] = {1,2,3,4,5};

extern int num_count(int array[], int n, int number);

int main(){
    int mean = num_count(array, 5, 1);
    std::cout << mean << std::endl;
    return 0;
}