#include <iostream>
#include <vector>

const int number = 255;

std::vector<bool> num_to_binary(int num){
    std::vector<bool> bin;
    while (num > 0){
        bin.push_back(num%2);
        num/=2;
    }
    std::reverse(bin.begin(), bin.end());
    return bin;
}

int main(){
    std::vector<bool> bin = num_to_binary(number);
    for (int i = 0; i < (int)bin.size(); i++) std::cout<< bin.at(i);
    std::cout << std::endl;
    return 0;
}