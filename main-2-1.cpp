#include <iostream>

int array[] = {1,2,3,4,5,6,7,8,9}; 

extern int min_element(int array[], int n);

int main(){
    int min = min_element(array, 10);
    std::cout << min << std::endl;
    return 0;
}