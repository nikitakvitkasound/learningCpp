// CXI Problems :: 45 :: Program to display the series and find the sum of 1 + 3 + 5 + ... + n.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).
#include <iostream>

int main(){
    int number;
    int sum = 0;
    std::cout << "I can find the series of odd numbers until N!\n";
    
    std::cout << "N: ";
    std::cin >> number;

    for(int i = 0; i <= number; ++i){
        if(i % 2 != 0){
            sum += i;
            if(i != 1){
                std::cout << " + " << i;
            }
            else{
                std::cout << i;
            }
        }
    }

    std::cout << " is " << sum << "\n\n";

    system("pause");
    return 0;
}
