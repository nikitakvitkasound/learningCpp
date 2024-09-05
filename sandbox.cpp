#include <iostream>
#include <cmath>

int main(){
    int input = 154;

    int cnt_digits = static_cast<int>(std::log10(input)) + 1;
    int armstrong { };
    for(int input_copy = input; input_copy != 0; input_copy /= 10){
        armstrong = static_cast<int>(std::pow(input_copy % 10, cnt_digits));
    }
    bool test = input == armstrong;
    std::cout << test;
    return 0;
}
