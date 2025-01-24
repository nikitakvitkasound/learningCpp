#include <iostream>
#include "g_composer.h"
#include "g_user_interface.h"
#include "g_database.h"

// void Test()

int main(){
    Database composers;

    // for(int i = 0; i < 2; ++i){
    //     composers.AddComposer();
    // }

    // composers.DisplayAll();

    composers.AddComposer();
    composers.AddComposer();
    composers.AddComposer();
    
    composers.DisplayByID();
    


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
