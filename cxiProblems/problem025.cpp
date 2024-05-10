// CXI Problems :: 25 :: C++ Program to Swap Two Numbers.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums;
    int input_number;
    
    std::cout << "Hello, input two numbers.\n";
    
    std::cout << "Number #1: ";
    std::cin >> input_number;
    nums.push_back(input_number);

    std::cout << "Number #2: ";
    std::cin >> input_number;
    nums.insert(nums.begin(), input_number);

    std::cout << "ERROOorrr . . . Number #1: " << *nums.begin() << ". Number #2: " << *std::next(nums.begin(), 1) << ".\n\n";

    system("pause");
    return 0;
}
