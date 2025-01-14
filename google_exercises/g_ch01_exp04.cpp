#include <iostream>

// I'm too lazy to finish it but by checking chars in string you call switch and print letters

const int PATTERN_WIDTH { 5 };  // Support any number but '5' has nicer quality.

void PrintF(char sym);

int main(){
    std::string user_input {};
    std::getline(std::cin, user_input);

    for(auto& letter : user_input){
        std::cout << '\n';
        switch (letter)
        {
        case 'A':
            std::cout << "Call PrintA() . . .\n";
            break;
        case 'B':
            std::cout << "Call PrintB() . . .\n";
            break;
        // letters - letters - functions - functions -
        case 'F':
            PrintF(letter);
            break;
        default:
            break;
        }
    }

    std::cout << '\n';
    system("pause");
    return 0;
}

void PrintF(char sym){
    int line { PATTERN_WIDTH };
    int pattern[PATTERN_WIDTH] {line, line - 4, line - 2, line - 4, line - 4};
    
    for(size_t i = 0; i < PATTERN_WIDTH; ++i){
        for(int j = 0; j < pattern[i]; ++j){
            std::cout << sym;
        }
        std::cout << '\n';
    }
    
}
