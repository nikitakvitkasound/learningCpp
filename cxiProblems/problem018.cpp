// CXI Problems :: 18 :: C++ Program to Check Whether a Character is a Vowel or Consonant.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)


#include <iostream>
#include <string>

const std::string VOWELS = "AEIOU";
const std::string CONSONANTS = "BCDFGHJKLMNPQRSTVWXYZ";
const std::string NOT_ALLOWED = "~!@#$%^&*()_+`-={}|[]\":;<>?,./0123456789";

void GetInputAndValidate(const std::string& phrase, std::string& input);

int main(){
    std::cout << "Hello I can tell whether a Character is a Vowel or Consonant!\n";

    std::string user_char;
    GetInputAndValidate("Type a Character (1 symbol between A-Z): ", user_char);
    
    if(VOWELS.find(user_char) != std::string::npos){
        std::cout << "'" << user_char << "' is vowel character\n\n";
    }
    else if(CONSONANTS.find(user_char) != std::string::npos){
        std::cout << "'" << user_char << "' is consonants character\n\n";
    }
    else{
        std::cout << "To be honest, I don't know what is '" << "'. I think you discover new character for me!\n\n";
    }

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void GetInputAndValidate(const std::string& phrase, std::string& input){
    do{
        std::cout << phrase;
        std::cin >> input;

        if(std::cin.fail() || input.size() > 1){
            std::cout << "[ERROR]: ";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else if(NOT_ALLOWED.find(input) != std::string::npos){
            std::cout << "[ERROR]: Only letters are allowed\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            input[0] = static_cast<char>(std::toupper(input[0]));
            break;
        }
    }while(true);
}
