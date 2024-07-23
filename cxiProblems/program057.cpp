// CXI Problems :: 57 :: C++ Program to Convert Binary Number to Decimal and vice-versa.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).
#include <iostream>
#include <string>

int main(){
    std::string input_binary;
    std::cout << "Input binary number: ";
    std::cin >> input_binary;

    int convrt_binary = std::stoi(input_binary, nullptr, 2);

    std::cout << input_binary << " : " << convrt_binary << '\n';

    system("pause");
    return 0;
}
