// CXI Problems :: 20 :: C++ Program to find if the entered year is a leap year or not.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>

int main(){
    std::cout << "Input a year and I'll tell you is year a leap or not: ";
    
    int year;
    std::cin >> year;
    if (year % 4 == 0){
        std::cout << "'" << year << "' is leap year.\n\n";
    }
    else{
        std::cout << "'" << year << "' is not leap year.\n\n";
    }


    system("pause");
    return 0;
}
