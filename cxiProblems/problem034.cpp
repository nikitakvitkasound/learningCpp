// CXI Problems :: 34 :: C++ Program to Calculate the Power of a Number.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    
    std::cout << "Input number #1: ";
    std::cin >> a;

    std::cout << "Input number #2: ";
    std::cin >> b;

    std::cout << a << " power of " << b << " is equal " << std::pow(a, b);


    std::cout << "\n\n";
    system("pause");
    return 0;
}
