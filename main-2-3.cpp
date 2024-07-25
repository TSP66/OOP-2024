#include <iostream>

int array[] = {1,2,3,3,5,2,6,7,8,9,2,5,9};

extern void two_five_nine(int array[], int n);

int main(){
    two_five_nine(array, 13);
    return 0;
}