#include <map>
#include <iostream>

double weighted_average(int array[], int n){
    std::map<int, int> occurences;
    double mean = 0.0;
    for (int i = 0; i < n; i++){
        occurences[array[i]] += 1;
    }
    for (int i = 0; i < n; i++){
        mean += (double) occurences[array[i]] / (double) n * (double) array[i];
    }
    return mean;
}
