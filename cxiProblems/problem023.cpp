// CXI Problems :: 23 :: Nested condition
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    std::cout << "If you are have membership and you are over 18 you can have our 10% discount!!!\n";
    int age;
    char membership_status;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Do you have membership (Y/N)? ";
    std::cin >> membership_status;
    membership_status = static_cast<char>(std::toupper(membership_status));

    if(age >= 18 && membership_status == 'Y'){
        std::cout << "Congrats! You have our 10% discount for now!\n\n";
    }
    else{
        std::cout << "Sorry. We will ask you to pay whole price!\n\n";
    }


    system("pause");
    return 0;
}
