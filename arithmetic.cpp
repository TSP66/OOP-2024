#include <iostream>
#include <vector>
#include <algorithm>

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

vector<bool> left_shift(vector<bool> num){
    num.push_back(false);
    return num;
}

vector<bool> right_shift(vector<bool> num){
    num.pop_back();
    return num;
}

vector<bool> add(vector<bool> num1, vector<bool> num2){
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    const int num1_l = (int)num1.size();
    const int num2_l = (int)num2.size();
    vector<bool> sum;
    bool carry = false;
    for (int i = 0; i < max(num1_l, num2_l); i++){
        bool bit_1 = false;
        bool bit_2 = false;
        if (i < num1_l) bit_1 = num1.at(i);
        if (i < num2_l) bit_2 = num2.at(i);
        int s = (int) bit_1 + (int) bit_2 + (int) carry;
        switch (s){
            case 0:
            sum.push_back(false);
            carry = false;
            break;
            case 1:
            sum.push_back(true);
            carry = false;
            break;
            case 2:
            sum.push_back(false);
            carry = true;
            break;
            default:
            sum.push_back(true);
            carry = true;
            break;
        }
    }
    if (carry){
        sum.push_back(true);
    }
    reverse(sum.begin(), sum.end());
    return sum;
}

int main(){
    vector<bool> bin = add(num_to_binary(56), num_to_binary(72));
    for (int i = 0; i < (int)bin.size(); i++) cout<< bin.at(i);
    return 0;
}