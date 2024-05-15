// CXI Problems :: 33 :: C++ Program to Generate a Multiplication Table.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    std::cout << "\t/-------------------------------Hello! This is Multiplication Table!-------------------------------/\n\n";

    for(int i = 1; i < 10; ++i){
        std::cout << "  ";
        for(int j = 2; j < 10; ++j){
            std::cout << j << " x " << i << " = " << i * j << ". \t";
        }
        std::cout << '\n';
    }

    std::cout << "\n\n";
    system("pause");
    return 0;
}
