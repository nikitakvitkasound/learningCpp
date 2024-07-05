// CXI Problems :: 47 :: Program to add the first seven terms of the following series using a for loop: 1/1! + 2/2! + 3/3! + ...
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    float num = 7.0f;
    float sum = 0.0f;
    
    std::cout << "I can do sum of the series of 1/1! + 1/2! + 1/3! ... 1/n! Just input integer number: ";
    std::cin >> num;

    for(float i = num; i != 0; --i){
        float fac = 1.0f;
        for(float j = i; j != 0; --j){
            fac *= j;
        }
        // std::cout << fac << '\n';
        sum += 1 / fac;
    }
    
    std::cout << ">>> " << sum;
    
    
    system("pause");
    return 0;
}
