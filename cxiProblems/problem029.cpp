// CXI Problems :: 29 :: C++ Program to Calculate the Sum of Natural Numbers. (by using divergent series and formula: Sn = n(n+1)/2) https://en.wikipedia.org/wiki/1_%2B_2_%2B_3_%2B_4_%2B_%E2%8B%AF
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    float series;
    std::cout << "Hello! I know how to calculate sum of natural numbers (i.e. 'sum numbers until 4 is 10 (1 + 2 + 3 + 4 = 10))\n";
    std::cout << "> Input range in which I should do a calculation: ";
    
    std::cin >> series;
    series = series * (series + 1) * 0.5f;

    std::cout << ">> Sum of natural numbers is '" << series << "'\n\n";

    
    system("pause");
    return 0;
}
