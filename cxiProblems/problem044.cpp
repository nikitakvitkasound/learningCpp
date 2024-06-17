// CXI Problems :: 44 :: User Menu Interaction. 
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

// experimenting with system() you need problem016.exe, problem033.exe and problem038.exe (!!!)

#include <iostream>
#include <cstdlib>

void PrintMenuAndForCommand(int& a);
void ToQuitOrExecute(bool& a);

int main(){
    int menu_command;
    int file_status;
    bool is_execute = true;
    
    while(is_execute){
        PrintMenuAndForCommand(menu_command);
        switch(menu_command){
            case 1:
                file_status = system("problem033.exe");
                if (file_status != 0){
                    std::cerr << "Error executing . . ." << std::endl;
                }
                ToQuitOrExecute(is_execute);
                break;
            case 2:
                file_status = system("problem038.exe");
                if (file_status != 0){
                    std::cerr << "Error executing . . ." << std::endl;
                }
                ToQuitOrExecute(is_execute);
                break;
            case 3:
                file_status = system("problem016.exe");
                if (file_status != 0){
                    std::cerr << "Error executing . . ." << std::endl;
                }
                ToQuitOrExecute(is_execute);
                break;
            case 4:
                std::cout << "See you next time, bye-bye!\n";
                is_execute = false;
                break;
            default:
                std::cout << "Something went wrong!\n";
                is_execute = false;
        }
    }

    std::cout << '\n';
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void PrintMenuAndForCommand(int& a){
    std::cout << "\t--Menu--\n";
    std::cout << "1. Print Multiplication Table\n";
    std::cout << "2. Draw Right Triangle Figure\n";
    std::cout << "3. Check Whether a Number is Even or Odd\n";
    std::cout << "4. Quit (Close the Program)\n";

    do{
        std::cout << ">>> ";
        std::cin >> a;
        if(std::cin.fail() || (a < 1) || (a > 4)){
            std::cerr << "[ERROR]: I understand only commands between 1 and 4\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        std::cout << '\n';
        break;
    }while(true);
}

void ToQuitOrExecute(bool& a){
    char answer;
    std::cout << "\nDo you want to quit? (y/n) ";
    std::cin >> answer;
    answer = static_cast<char>(std::toupper(answer));
    if(answer != 'Y'){
        a = true;
        system("cls");
    }
    else{
        a = false;
    }
}
