#include <iostream>

extern int *readNumbers(void);

extern void hexDigits(int *numbers,int length);

int main(){
    int * nums = readNumbers();
    hexDigits(nums,10);
    delete [] nums;
    return 0;
}