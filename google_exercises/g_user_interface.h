#ifndef G_USER_INTERFACE_H_
#define G_USER_INTERFACE_H_

#include <iostream>
#include <limits>

namespace UIcmd{

    void GetMenu(){
        std::cout << "\tComposer Database\n";
        std::cout << "---------------------------------------------\n";
        std::cout << "\t1) Add a new composer\n";
        std::cout << "\t2) Edit composer by ID\n";
        std::cout << "\t3) List composer by ID\n";
        std::cout << "\t4) List all composers by rank\n";
        std::cout << "\t5) List all composers by name\n";
        std::cout << "\t6) List all composers\n";
        std::cout << "\t0) Quit\n";
        std::cout << "---------------------------------------------\n\n";
    }

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
        if(!(std::cin >> input) || input < 0){
            std::cin.clear();
            std::cerr << "[ERROR]: Input only positive numbers.\n";
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return input;
    }

    Composer SetComposer(){
        return {GetString("\nEnter composer's first name: "), GetString("Enter composer's last name: "), 
                GetNumber("Enter composer's year of birth: "), GetString("Enter composer's music genre: "), 
                GetString("Enter interesting fact about composer: "), GetNumber("Enter rank: ")};
    }

    void GetComposer(const Composer& comp)
    {
        std::cout << "\n## " << comp.id << " ##\n";
        std::cout << "First name: " <<  comp.name << '\n';
        std::cout << "Last name: " <<  comp.name_last << '\n';
        std::cout << "Year of birth: " <<  comp.year_birth << '\n';
        std::cout << "Music genre: " <<  comp.genre << '\n';
        std::cout << "Interesting fact: " << comp.fact_about << '\n';
        std::cout << "Rank: " << comp.rank << "\n\n";
    }
}

#endif
