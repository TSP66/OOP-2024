#include <iostream>

extern int count_evens(int number);

int main(){
    int nEvens = count_evens(100);
    std::cout << nEvens << std::endl;
    return 0;
}