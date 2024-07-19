// CXI Problems :: 56 :: C++ Program to Display Armstrong Number Between Two Intervals.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

bool IsArmstrongNumber(int a);

int main(){
    int num_01;
    int num_02;
    
    std::cout << "Let's find Armstrong numbers in range!\n";
    std::cout << "Number #1: ";
    std::cin >> num_01;
    std::cout << "Number #2: ";
    std::cin >> num_02;

    for(int i = num_01; i <= num_02; ++i){
        if(IsArmstrongNumber(i)){
            std::cout << i << "\n";
        }
    }

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

bool IsArmstrongNumber(int a){
    int cnt_digits = static_cast<int>(std::log10(a)) + 1;
    
    int buffer = a;
    int armstrong = 0;
    while(buffer > 0){
        armstrong += static_cast<int>(std::pow(buffer % 10, cnt_digits));
        buffer = buffer / 10;
    }
    if(a == armstrong){
        return true;
    }
    else{
        return false;
    }
}
