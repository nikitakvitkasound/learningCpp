// CXI Problems :: 52 :: C++ Program to Reverse a Number.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

//todo - get number
//todo - covert to string
//todo - reverse string
//todo - covert back to int

#include <iostream>
#include <cmath>
#include <string>

int main(){
    int num_original;
    int num_reverse = 0;
    std::cout << "Let's reverse a number (any integer): ";
    std::cin >> num_original;

    while(num_original > 0){
        int last_digit = num_original % 10;
        num_reverse = (num_reverse * 10) + last_digit;
        num_original = num_original / 10;
    }

    std::cout << "Reverse number is '" << num_reverse << "'\n\n";

    system("pause");
    return 0;
}
