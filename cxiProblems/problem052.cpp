// CXI Problems :: 52 :: C++ Program to Reverse a Number.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

int main(){
    long long int num_original;
    long long int num_reverse = 0;
    std::cout << "Let's reverse a positive integer: ";
    std::cin >> num_original;

    while(num_original > 0){
        long long int last_digit = num_original % 10;
        num_reverse = (num_reverse * 10) + last_digit;
        num_original = num_original / 10;
    }

    // not using math approch

    // std::string int_to_string = std::to_string(num_original);
    // std::reverse(int_to_string.begin(), int_to_string.end());
    // num_reverse = std::stoi(int_to_string);    


    std::cout << "Reverse number is '" << num_reverse << "'\n\n";

    system("pause");
    return 0;
}
