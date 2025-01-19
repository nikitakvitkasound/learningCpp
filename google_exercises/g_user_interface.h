#include <iostream>
#include <limits>

namespace UIcmd{

    void GetInput(const std::string& prompt, std::string& input){
        std::cout << prompt;
        std::getline(std::cin, input);
    }

    void GetInput(const std::string& prompt, int& input){
        std::cout << prompt;
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
};
