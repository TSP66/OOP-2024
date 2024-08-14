#include <iostream>

extern int *readNumbers(void);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main(){
    int * arr = readNumbers();
    int * r_arr = reverseArray(arr,10);
    std::cout << equalsArray(arr,r_arr,10) << std::endl;
    delete [] arr;
    delete [] r_arr;
    return 0;
}