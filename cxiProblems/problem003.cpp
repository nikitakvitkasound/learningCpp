// CXI Problems :: 3 :: C++ Program to Add/Subtract/Multiply/Divide Two Integers.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/LearningCpp)

#include <iostream>
#include <string>

static void AskForInputAndValidate(const std::string& validate_to){
    std::string input;
    std::cout << "Type letter 'A', 'S', 'M' or 'D' and I will do the rest ('Q' to quit program): ";
    std::cin >> input;
}

int main(){
    const int kA = 4;
    const int kB = 2;
    const std::string commands = "ASMDQ";
    //bool keep_calculate = true;
    std::string user_command;

    std::cout << "Hello! Do you want to see my arithmetic skills?\n";
    std::cout << "I can easily Add/Subtract/Multiply/Divide " << kA << " and " << kB << '\n';
    std::cout << "What do you want see first?\n";

    std::cin >> user_command;
    std::cout << user_command[0] << '\n';
        
    //user_command = AskForInput();
    // while (keep_calculate){
    //     switch (user_command){
    //     case 0: //A
    //         std::cout << "If you add " << kA << " and " << kB << " you will get " << kA + kB << " as result\n";
    //         std::cout << "\nDo you want to try other arithmetic operations?\n";
    //         //user_command = AskForInput();
    //         break;
    //     case 1: //B
    //         std::cout << "If you subtract " << kA << " from " << kB << " you will get " << kA - kB << " as result\n";
    //         std::cout << "\nDo you want to try other arithmetic operations?\n";
    //         //user_command = AskForInput();
    //         break;
    //     case 2: //M
    //         std::cout << "If you multiply " << kA << " and " << kB << " you will get " << kA * kB << " as result\n";
    //         std::cout << "\nDo you want to try other arithmetic operations?\n";
    //         //user_command = AskForInput();
    //         break;
    //     case 3: //D
    //         std::cout << "If you divide " << kA << " by " << kB << " you will get " << kA / kB << " as result\n";
    //         std::cout << "\nDo you want to try other arithmetic operations?\n";
    //         //user_command = AskForInput();
    //         break;
    //     case 4: //Q
    //         keep_calculate = false;
    //         break;
    //     default:
    //         std::cin.clear();
    //         std::cin.ignore(100000, '\n');

    //         std::cout << "[ERROR]: ";
    //         user_command = AskForInput();
    //     }
    // }
    std::cout << "Okay, that's all for today. Bye!\n";

    system("pause");
    return 0;
}
