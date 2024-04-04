// CXI Problems :: 3 :: C++ Program to Add/Subtract/Multiply/Divide Two Integers.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/LearningCpp)

#include <iostream>
#include <string>

int main(){
    const int kA = 4;
    const int kB = 2;
    bool keep_calculate = true;
    char user_command;

    std::cout << "Hello! Do you want to see my arithmetic skills?\n";
    std::cout << "I can easily Add/Subtract/Multiply/Divide " << kA << " and " << kB << '\n';
    std::cout << "Type 'A', 'S', 'M' or 'D' to do arithmetic operation ('Q' to quit the program) ";
    
    while (keep_calculate){
        std::cin >> user_command;
        user_command = static_cast<char>(toupper(user_command));

        switch (user_command){
        case 'A': //A
            std::cout << "If you add " << kA << " and " << kB << " you will get " << kA + kB << " as result\n";
            break;
        case 'S': //S
            std::cout << "If you subtract " << kA << " from " << kB << " you will get " << kA - kB << " as result\n";
            break;
        case 'M': //M
            std::cout << "If you multiply " << kA << " and " << kB << " you will get " << kA * kB << " as result\n";
            break;
        case 'D': //D
            std::cout << "If you divide " << kA << " by " << kB << " you will get " << kA / kB << " as result\n";
            break;
        case 'Q': //Q
            std::cout << "Okay, that's all for today. Bye!\n";
            keep_calculate = false;
            break;
        default:
            std::cout << "Type 'A', 'S', 'M' or 'D' to do arithmetic operation ('Q' to quit the program)\n";
        }
        if (keep_calculate){
            std::cout << "Let's do one more . . .  ";
        }
    }

    system("pause");
    return 0;
}
