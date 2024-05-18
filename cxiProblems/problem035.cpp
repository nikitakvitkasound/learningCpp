// CXI Problems :: 35 :: Factorial Calculator. (n! = n * (n - 1) * (n - 2) . . . )
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).


#include <iostream>

int main(){
    unsigned int n;
    unsigned int result = 1;
    std::cout << "I can find factorial (n!), input any positive integer: ";
    std::cin >> n;

    if(n > 1){
        for(unsigned int i = 0; i < n; ++i){
            result *= (n - i);
        }
        std::cout << "n! of '" << n << "' is " << result << ".";
    }
    else{
        std::cout << "n! of '" << n << "' is " << result << ".";
    }


    std::cout << "\n\n";
    system("pause");
    return 0;
}
