#include <iostream>

void print_scaled(int array[3][3],int scale){
    for (int x = 0; x < 3; x++){
        std::cout << scale*array[x][0] << " " << scale*array[x][1] << " " << scale*array[x][2] << std::endl;
    }
}