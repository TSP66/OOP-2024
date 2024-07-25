#include <iostream>

void two_five_nine(int array[], int n){
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    for (int i = 0; i < n; i++){
        switch (array[i]){
            case 2:
            num_twos += 1;
            break;
            case 5:
            num_fives += 1;
            break;
            case 9:
            num_nines += 1;
            break;
        }
    }
    std::cout << "2:" << num_twos;
    std::cout << ";5:" << num_fives;
    std::cout << ";9:" << num_nines << ";" << std::endl;
}