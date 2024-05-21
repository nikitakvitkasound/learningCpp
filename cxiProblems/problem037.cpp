// CXI Problems :: 37 :: C++ Program to Display Prime Numbers Between Two Intervals.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

bool IsPrimeNumber(int n);

int main(){
    int number_01;
    int number_02;
    std::cout << "I will print all prime numbers between number #1 and number #2\n";
    std::cout << "Input number #1: ";
    std::cin >> number_01;
    std::cout << "Input number #2: ";
    std::cin >> number_02;

    if(number_02 < number_01){
        std::cout << "[ERROR]: number #2 must be bigger than number #1!!\n\n";
        system("pause");
        return 0;
    }
    else{
        for(int i = number_01; i <= number_02; ++i){
            if(IsPrimeNumber(i)){
                std::cout << i << " is Prime Number\n";
            }
        }
    }

    std::cout << "\n\n";
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */
bool IsPrimeNumber(int n){
    if(n <= 1){
        return false;
    }
    if(n <= 3){
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0){
        return false;
    }

    for(int i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}
