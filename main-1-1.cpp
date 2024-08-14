#include <iostream>

extern int *readNumbers(void);
extern void printNumbers(int *numbers,int length) ;

int main(){
    int * nums = readNumbers();
    printNumbers(nums, 10);
    return 0;
}