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
int getMin(int *numbers,int length){
    int min = std::min(numbers[0],numbers[1]);
    for (int i = 0; i < length; i++){
        min = std::min(min,numbers[i]);
    }
    return min;
}
int secondSmallestSum(int *numbers,int length){
    int sum = getMin(numbers,length);
    for (int i = 0; i < length; i++){
        if (numbers[i] == sum){
            numbers[i] = INT_MAX;
            break;
        }
    }
    return sum + getMin(numbers,length);
}
