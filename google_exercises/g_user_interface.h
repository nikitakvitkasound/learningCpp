#ifndef G_USER_INTERFACE_H_
#define G_USER_INTERFACE_H_

#include <iostream>
#include <limits>

namespace UIcmd{

    std::string GetString(const std::string& prompt){
        std::string input;
        std::cout << prompt;
        std::cin >> input;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return input;
    }

    int GetNumber(const std::string& prompt){
        int input;
        std::cout << prompt;
        if(!(std::cin >> input)){
            std::cin.clear();
            std::cerr << "[ERROR]: Input only positive numbers.\n";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return input;
    }

    Composer SetComposer(){
        return {GetString("Enter composer's first name: "), GetString("Enter composer's last name: "), 
                GetNumber("Enter composer's year of birth: "), GetString("Enter composer's music genre: "), 
                GetString("Enter interesting fact about composer: "), GetNumber("Enter rank: ")};
    }

    void GetComposer(Composer& comp)
    {
        std::cout << "\nFirst name: " <<  comp.name << '\n';
        std::cout << "Last name: " <<  comp.name_last << '\n';
        std::cout << "Year of birth: " <<  comp.year_birth << '\n';
        std::cout << "Music genre: " <<  comp.genre << '\n';
        std::cout << "Interesting fact: " << comp.fact_about << '\n';
        std::cout << "Rank: " << comp.rank << "\n\n";
    }
}

#endif











// namespace UIcmd{

//     void PrintMenu(){
//         std::cout << "Composer Database\n";
//         std::cout << "---------------------------------------------\n";
//         std::cout << "1) Add a new composer\n";
//         std::cout << "2) Retrieve a composer's data\n";
//         std::cout << "3) Promote/demote a composer's rank\n";
//         std::cout << "4) List all composers\n";
//         std::cout << "5) List all composers by rank\n";
//         std::cout << "0) Quit\n";
//     }


//     void GetInput(const std::string& prompt, std::string& input){
//         std::cout << prompt;
//         std::getline(std::cin, input);
//     }

//     void GetInput(const std::string& prompt, int& input){
//         std::cout << prompt;
//         std::cin >> input;
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     }

// };
