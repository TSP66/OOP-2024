#include <iostream>

void count_digits(int array[4][4]){
    int freq[10] = {};
    for (int i = 0; i < 16; i++){
        freq[array[i/4][i%4]] += 1;
    }
    for (int i = 0; i < 10; i++){
        std::cout << i << ":" << freq[i] << ";";
    }
    std::cout << "\n";
}