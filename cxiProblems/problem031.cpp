// CXI Problems :: 31 :: C++ Program to print Fibonacci series up to 100 (BUT IN MY CASE IT'S UP TO 93, unsigned long long is not enough).
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <vector>

int main(){
    const int UP_TO = 100;
    std::vector<unsigned long long> fibo;                  // Fn = Fn-1 + Fn-2
    std::vector<unsigned long long>::iterator fibo_n_1;    // I could use only 'std::next' but variables are just for better readability
    std::vector<unsigned long long>::iterator fibo_n_2;
    
    std::cout << "Let's print Fibonacci series up to " << UP_TO << " . . . \n";

    for(int i = 0; i <= UP_TO; ++i){
        if(i > 1){
            fibo_n_1 = std::next(fibo.end(), -2);
            fibo_n_2 = std::next(fibo.end(), -1);
            fibo.push_back(*fibo_n_1 + *fibo_n_2);
        }
        else{
            fibo.push_back(static_cast<unsigned long long>(i));
        }
        std::cout << "F" << i << ") " << *std::next(fibo.begin(), i);
        
        // Funzie..
        if(i > 93){
            std::cout << "\t[ERROR]: 64-bit isn't enough!";
        }
        std::cout << '\n';

    }
    std::cout << "\n\n";


    system("pause");
    return 0;
}
