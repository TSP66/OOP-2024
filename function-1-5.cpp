#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]){
    for (int x = 0; x < 3; x++){
        std::cout << array1[x][0] + array2[x][0] << " " << array1[x][1] + array2[x][0]<< " " << array1[x][2] + array2[x][0]<< std::endl;
    }
}