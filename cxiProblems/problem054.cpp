// CXI Problems :: 54 :: C++ Program to Check Whether a Number is Palindrome or Not.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    int num_original;
    int num_reversed = 0;
    int num_buffer;
    std::cout << "Let's find out is a input number is Palindrome or not: ";
    std::cin >> num_original;
    num_buffer = num_original;

    while(num_buffer > 0){
        int last_digit = num_buffer % 10;
        num_reversed = (num_reversed * 10) + last_digit;
        num_buffer = num_buffer / 10;
    }

    if(num_original == num_reversed){
        std::cout << "The number '" << num_original << "' is Palindrome!\n";
    }
    else{
        std::cout << "The number '" << num_original << "' is not Palindrome! Because reversed number is '" << num_reversed << "'!\n";
    }

    system("pause");
    return 0;
}
