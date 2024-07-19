// CXI Problems :: 54 :: C++ Program to Check Armstrong Number.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

int main(){
    int num_original;
    std::cout << "Let's find Armstrong number: ";
    std::cin >> num_original;

    int cnt_digits = static_cast<int>(std::log10(num_original)) + 1;
    double num_armstrong = 0.0;
    int num_buffer = num_original;

    while(num_buffer > 0){
        int digit = num_buffer % 10;
        num_armstrong += std::pow(digit, cnt_digits);
        num_buffer = num_buffer / 10;
    }

    if(num_original == num_armstrong){
        std::cout << "'" << num_original << "' is Armstrong number!\n";
    }
    else{
        std::cout << "'" << num_original << "' is NOT Armstrong number! Because sum and power of digits are equal to '" << num_armstrong << "'.\n";
    }

    system("pause");
    return 0;
}
