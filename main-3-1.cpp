#include <iostream>

extern int *readNumbers(void);
extern bool equalsArray(int *numbers1,int *numbers2,int length);


int main(){
    int * arr1 = readNumbers();
    int * arr2 = readNumbers();
    std::cout << equalsArray(arr1,arr2,10) << std::endl;
    delete [] arr1;
    delete [] arr2;
    return 0;
}