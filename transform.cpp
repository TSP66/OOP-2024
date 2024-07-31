#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int number = 255;

vector<bool> num_to_binary(int num){
    vector<bool> bin;
    while (num > 0){
        bin.push_back(num%2);
        num/=2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main(){
    vector<bool> bin = num_to_binary(number);
    for (int i = 0; i < (int)bin.size(); i++) cout<< bin.at(i);
    cout << endl;
    return 0;
}