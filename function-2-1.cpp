#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<bool> num_to_binary(int num){
    vector<bool> bin;
    while (num > 0){
        bin.push_back(num%2);
        num/=2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

void print_binary_str(string decimal_number){
    vector<bool> bin = num_to_binary(stoi(decimal_number));
    for (int i = 0; i < (int)bin.size(); i++) cout<< bin.at(i);
    cout << endl;
}