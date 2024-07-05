// CXI Problems :: 46 :: Program to display the sum of the series 1 + 1/2 + 1/3 + ... + 1/n.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <cmath>

int main(){
    float sum = 0;
    float num = 1.0f;
    
    std::cout << "Input N integer and I will sum the series of 1 + 1/2 + 1/3 + ... 1/n\n";
    std::cin >> num;
    for(float i = 1.0; i <= num; ++i){
        sum += 1 / i;
    }
    std::cout << sum << '\n';

    system("pause");
    return 0;
}
