#include <iostream>

int *readNumbers(void){
    int * nums = new int[10];
    for (int i = 0; i < 10; i++)
        std::cin >> nums[i];
    return nums;
}
void printNumbers(int *numbers,int length){
    for (int i = 0; i < length; i++)
        std::cout << i << " " << numbers[i] << std::endl;
}
