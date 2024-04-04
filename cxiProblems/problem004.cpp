// CXI Problems :: 4 :: C++ Program to Add/Subtract/Multiply/Divide Two Integers entered by the user.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <cmath>

static int AskForInputAndValidate(){
    double input;
    std::cin >> input;
    while(std::cin.fail() || (input - std::floor(input))){
        std::cout << "[ERROR]: Invalid input. Input only integers: ";
        std::cin.clear();
        std::cin.ignore(100000, '\n');

        std::cin >> input;
    }
    return static_cast<int>(input);
}


int main(){
    std::cout << "Hey, let's do some arithmetic operations with two integers!\n";
    
    std::cout << "Input the first integer: ";
    int num_01 = AskForInputAndValidate();
    std::cout << "Input the second integer: ";
    int num_02 = AskForInputAndValidate();

    std::cout << "\nDo you want to add/subtract/multiply/divide these integers?\n";
    std::cout << "Use 'A', 'S', 'M', 'D' to do so :: ";
    char command;
    bool keep_calculate = true;
    while(keep_calculate)
    {
        std::cin >> command;
        command = static_cast<char>(toupper(command));
        switch(command)
        {
        case 'A':
            std::cout << "If you add " << num_01 << " and " << num_02 << " you will get " << num_01 + num_02 << " as result\n";
            keep_calculate = false;
            break;
        case 'S':
            std::cout << "If you subtract " << num_01 << " from " << num_02 << " you will get " << num_01 - num_02 << " as result\n";
            keep_calculate = false;
            break;
        case 'M':
            std::cout << "If you multiply " << num_01 << " and " << num_02 << " you will get " << num_01 * num_02 << " as result\n";
            keep_calculate = false;
            break;
        case 'D':
            std::cout << "If you divide " << num_01 << " by " << num_02 << " you will get " << num_01 / num_02 << " as result\n";
            keep_calculate = false;
            break;
        default:
            std::cout << "[ERROR]: Use 'A', 'S', 'M', 'D' to do so :: ";
            break;
        }
    }
    

    system("pause");
    return 0;
}
