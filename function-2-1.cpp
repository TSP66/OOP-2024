#include <iostream>
#include <string>
#include <vector>


std::vector<bool> num_to_binary(int num){
    std::vector<bool> bin;
    while (num > 0){
        bin.push_back(num%2);
        num/=2;
    }
    std::reverse(bin.begin(), bin.end());
    reverse(bin.begin(), bin.end());
    return bin;
}

void print_binary_str(std::string decimal_number){
    int num = std::stoi(decimal_number);
    for 
}