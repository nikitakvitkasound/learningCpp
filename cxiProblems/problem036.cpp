// CXI Problems :: 36 :: Prime Number Checker
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

bool IsPrimeNumber(int n);

int main(){
    int number;
    std::cout << "Input any positive integer to check if it's Prime Number: ";
    std::cin >> number;
    if(IsPrimeNumber(number)){
        std::cout << number << " is Prime Number";
    }
    else{
        std::cout << number << " is not Prime Number";
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
