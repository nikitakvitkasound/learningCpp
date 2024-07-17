// CXI Problems :: 51 :: C++ Program to Count Number of Digits in an Integer.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>
#include <string>

int main(){
    int number;
    
    std::cout << "Input any integer and I will tell you how many digit it has: ";
    std::cin >> number;
    
    std::string number_of_digits = std::to_string(std::abs(number)); 
    std::cout << "Number of digits is " << number_of_digits.size() << "\n\n";

    system("pause");
    return 0;
}
