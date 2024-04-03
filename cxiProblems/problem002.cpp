// CXI Problems :: 2 :: C++ Program to print an integer entered by the user.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/LearningCpp)

#include <iostream>
#include <cmath>

int main(){
    double user_input;
    std::cout << "Please, input any integer: ";
    std::cin >> user_input;

    while(std::cin.fail() || (user_input - std::floor(user_input))){
        std::cout << "[ERROR]: Invalid input. Input only integers: whole positive (negative) numbers or zero. Try again: ";
        std::cin.clear();
        std::cin.ignore(100000, '\n');

        std::cin >> user_input;
    }

    int user_integer = static_cast<int>(user_input);
    std::cout << "You typed '" << user_integer << "' as your input integer" << '\n';
    
    system("pause");
    return 0;
}
