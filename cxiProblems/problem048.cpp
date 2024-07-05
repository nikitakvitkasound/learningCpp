// CXI Problems :: 48 :: C++ Program to Find GCD of Two Numbers.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).
// Trying Euclid's algorithm (with while loop)
#include <iostream>

int FindGCD(int a, int b);

int main(){
    int num_01;
    int num_02;
    std::cout << "Let's find GCD of two numbers!\n";
    
    std::cout << "Number 1: ";
    std::cin >> num_01;
    std::cout << "Number 2: ";
    std::cin >> num_02;


    std::cout << "GDC: " << FindGCD(num_01, num_02) << '\n';

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

int FindGCD(int a, int b){
    while(a != b){
        if(a < b){
            int buffer = b;
            b = a;
            a = buffer;
        }
        a -= b;
    }
    return a;
}
