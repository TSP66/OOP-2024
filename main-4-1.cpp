#include <iostream>

extern int *readNumbers(void);
extern int secondSmallestSum(int *numbers,int length);

int main(){
    int * arr = readNumbers();
    std::cout << secondSmallestSum(arr,10) << std::endl;
    delete [] arr;
    return 0;
}