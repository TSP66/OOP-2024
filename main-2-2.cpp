#include <iostream>

int array[] = {1,2,3,4,5,6,7,8,9}; 

extern int max_element(int array[], int n);

int main(){
    int max = max_element(array, 10);
    std::cout << max << std::endl;
    return 0;
}