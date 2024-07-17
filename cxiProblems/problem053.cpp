// CXI Problems :: 53 :: C++ Program to Calculate the Power of a Number.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

int main(){
    double x;
    double n;
    std::cout << "Let's calculate the power of a number!\n";
    std::cout << "Input number first: ";
    std::cin >> x;
    std::cout << "Input its exponent (power): ";
    std::cin >> n;

    std::cout << "And the answer is " << std::pow(x, n) << ".\n\n";

    system("pause");
    return 0;
}
