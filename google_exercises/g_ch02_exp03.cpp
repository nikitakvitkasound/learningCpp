#include <iostream>
#include "g_composer.h"
#include "g_user_interface.h"
#include "g_database.h"


int main(){
    Database composers;
    int command {};
    do{
        UIcmd::GetMenu();

        command = UIcmd::GetNumber(">> Your command: ");
        switch (command)
        {
        case 0:
            std::cout << "See you next time!\n\n";
            break;
        case 1:
            composers.AddComposer();
            std::cout << "\n . . . Composer is added . . . \n";
            break;
        case 2:
            composers.EditComposerByID();
            std::cout << "\n . . . Composer is edited . . . \n";
            break;
        case 3:
            composers.DisplayByID();
            break;
        case 4:
            composers.DisplayByRank();
            break;
        case 5:
            composers.DisplayByName();
            break;
        case 6:
            composers.DisplayAll();
            break;
        default:
            std::cerr << "\t[ERROR]: Only 1 - 6 commands of 0 to quit";
            break;
        }
    }while(command != 0);


    std::cout << '\n';
    system("pause");
    return 0;
}






















// OLD CODE

// int main(){
//     std::string name {};
//     std::string name_last {};
//     std::string genre {};
//     std::string fact {};
//     int rank {};
//     int birth_year {};

//     UIcmd::PrintMenu();

//     UIcmd::GetInput("Enter composer' first name: ", name);
//     UIcmd::GetInput("Enter composer' last name: ", name_last);
//     UIcmd::GetInput("Enter composer' birth year: ", birth_year);
//     UIcmd::GetInput("Enter composer' genre: ", genre);
//     UIcmd::GetInput("Enter interesting fact about composer: ", fact);
//     UIcmd::GetInput("Enter composer' rank: ", rank);

//     Composer New {name, name_last, genre, fact, birth_year, rank};

    
    
//     std::cout << "\n ************************************************** \n";
    
//     New.Display();
    

//     std::cout << '\n';
//     system("pause");
//     return 0;
// }
