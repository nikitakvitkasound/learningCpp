// CXI Problems :: 50 :: C++ Program to Display Characters from A to Z Using Loop.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>

int main(){
    int ascii_a = 65;
    int ascii_z = 90;
    for (int i = ascii_a; i <= ascii_z; ++i){
        std::cout << static_cast<char>(i) << " ";
    }

    std::cout << '\n';
    system("pause");
    return 0;
}
