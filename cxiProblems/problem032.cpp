// CXI Problems :: 32 :: C++ program to print Even numbers up to 100.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    const int UP_TO = 100;
    std::cout << "Hello, let's print Event numbers up to " << UP_TO << "!\n";

    for (int i = 1; i <= UP_TO; ++i){
        if (i % 2 == 0){
            std::cout << "> " << i << "\t(yep, it's even)\n";
        }
        // else{
        //     std::cout << "> " << i << "\t(yep, it's odd)\n";
        // }
    }


    std::cout << "\n\n";
    system("pause");
    return 0;
}
