// CXI Problems :: 14 :: C++ Program to Find ASCII Value of a Character (Single Character).
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>

static void GetInputAndValidate(char& ch);

int main(){
    std::cout << "Hello! I can help you to find ASCII value of a character (single character).\n";

    char input_ch;
    GetInputAndValidate(input_ch);

    int ascii = static_cast<int>(input_ch);
    std::cout << ">>> '" << input_ch << "' " << "ASCII value is '" << ascii << "'.\n\n";

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

static void GetInputAndValidate(char& ch){
    std::string input_buffer;
    do{
        std::cout << "Type any character (only 1 character) and I show you its ASCII value: ";
        std::cin >> input_buffer;

        if(std::cin.fail() || input_buffer.size() > 1){
            std::cout << "[ERROR]: ";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            ch = input_buffer[0];
            break;
        }
    } while(true);
}
