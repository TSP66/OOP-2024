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

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1) return false;
    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]) return false;
    }
    return true;
}


int *reverseArray(int *numbers1,int length){
    int * new_array = new int[length];
    for (int i = 0; i < length; i++){
        new_array[i] = numbers1[length-1-i];
    }
    return new_array;
}