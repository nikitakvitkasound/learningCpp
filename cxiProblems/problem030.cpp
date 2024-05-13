// CXI Problems :: 30 :: C++ to calculate the sum of numbers from n to l. (by using divergent series and formula: S = n(a+l)/2)
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    int a;
    int l;
    int n;

    std::cout << "Hello! I know how to calculate sum of natural numbers between 'a' and 'l'.\n";
    std::cout << "For example, a = 3 and l = 8 then sum will be 3 + 4 + 5 + 6 + 7 + 8 = 33.\n";
    
    std::cout << "Let's decide range of numbers (any integer number, but [RULE]: l > a is must!).\n";
    std::cout << "> Input 'a' (first number): ";
    std::cin >> a;

    std::cout << "> Now input 'l' (last number): ";
    std::cin >> l;

    //for this exercise I consider that 'l' is always bigger than 'a';
    if(a > 0){
        n = l - a + 1;
    }
    else{
        n = std::abs(a) + std::abs(l) + 1;
    }

    std::cout << "Calculating . . . \n";
    std::cout << "And sum of integers from '" << a << "' to '" << l << "' is '" << n * (a + l) * 0.5 << "'\n\n";


    system("pause");
    return 0;
}
