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

void hexDigits(int *numbers,int length){
    for (int i = 0; i < length; i++){
        switch (numbers[i]){
            case 10:
            std::cout << i << " " << "A" << std::endl;
            break;
            case 11:
            std::cout << i << " " << "B" << std::endl;
            break;
            case 12:
            std::cout << i << " " << "C" << std::endl;
            break;
            case 13:
            std::cout << i << " " << "D" << std::endl;
            break;
            case 14:
            std::cout << i << " " << "E" << std::endl;
            break;
            case 15:
            std::cout << i << " " << "F" << std::endl;
            break;
            default:
            std::cout << i << " " << numbers[i] << std::endl;
            break;
        }
    }
}