#include <iostream>

int array[] = {1,2,3,4};

extern int array_sum(int array[], int n);

int main(){
    int sum = array_sum(array,4);
    std::cout << sum << std::endl;
    return 0;
}