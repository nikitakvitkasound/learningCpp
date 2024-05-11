// CXI Problems :: 28 :: C++ Program to Check Whether a Character is an Alphabet or not (I will use C-stype array)
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>

int main(){
    const size_t QTY_LETTERS = 26;
    const char ABC[QTY_LETTERS] = {'A', 'B', 'C', 'D', 'E', 'F', 
                                   'G', 'H', 'I', 'J', 'K', 'L', 
                                   'M', 'N', 'O', 'P', 'Q', 'R', 
                                   'S', 'T', 'U', 'V', 'W', 'X', 
                                   'Y', 'Z'};
    bool is_found = false;
    
    std::cout << "Hello! Input a character and I will tell you if it's alphabetic character or not\n";
    
    char user_character;
    std::cout << "Your character is ";
    std::cin >> user_character;
    user_character = static_cast<char>(std::toupper(user_character));
    
    for (size_t i = 0; i < QTY_LETTERS; ++i){
        if(user_character == ABC[i]){
            std::cout << ">> '" << user_character << "' is an alphabetic character\n\n";
            is_found = true;
            break;
        }
    }

    if(!is_found){
        std::cout << ">> '" << user_character << "' is not an alphabetic character\n\n";
    }


    system("pause");
    return 0;
}
