// CXI Problems :: 42 :: C++ Program to Print Sum of Numbers from 1 to n (and print Sum of Even and Odd Numbers) do it all by using For Loop (or While Loop).
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    int input_number;

    std::cout << "Hello, let's find out sum of integer numbers from 1 to N (N > 1)!\n";
    std::cout << "Input N: ";
    std::cin >> input_number;
    
    if(std::cin.fail() || input_number < 1){
        std::cout << "[ERROR]: Input number must be bigger than 1!\n\n";
        system("pause");
        return 0;
    }

    int sum_nums = 0;
    int sum_num_even = 0;
    int sum_num_odd = 0;
    for(int i = 1; i <= input_number; ++i){
        sum_nums += i;
        if(i % 2 == 0){
            sum_num_even += i;
        }
        else{
            sum_num_odd += i;
        }
    }
    std::cout << "Sum of numbers between 1 and " << input_number << " is " << sum_nums 
              << " and sum of even numbers in this range is " << sum_num_even 
              << " and odd numbers is " << sum_num_odd << "\n\n";
    
    
    system("pause");
    return 0;
}
