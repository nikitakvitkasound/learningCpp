#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<std::string> my_games = {"Super Mario Odyssey", "CS", "Batman: Arkham Knight"};
    std::string input;

    std::cout << "Hello, you are back to see your list or something else?\n";
    std::cout << "Type 'show', 'add' to add new title, 'delete' to delete or 'quit' to close program.\n";
    
    while(true){
        std::cout << "> What do you want to do? ";
        std::cin >> input;
        if(input == "show"){
            std::cout << "\t\t\t- - - - - - - - - - - - - - \n";
            for(auto itr = my_games.begin(); itr != my_games.end(); ++itr){
                std::cout << "\t\t\t" << *itr << '\n';
            }
            std::cout << "\t\t\t- - - - - - - - - - - - - - \n";
        }
        else if(input == "add"){
            std::cout << ">> What game title do you want to add? ";
            std::cin >> input;
            if(find(my_games.begin(), my_games.end(), input) != my_games.end()){
                std::cout << ">>> Such game is already on the list\n";
            }
            else{
                my_games.push_back(input);
                std::cout << "* * * '" << input << "' is added . . . \n";
            }
        }
        else if(input == "delete"){
            std::cout << ">> What game title do you want to delete? ";
            std::cin >> input;
            auto itr_to_del = find(my_games.begin(), my_games.end(), input);
            if(itr_to_del != my_games.end()){
                my_games.erase(itr_to_del);
                std::cout << "* * * '" << input << "' is deleted . . . \n";
            }
            else{
                std::cout << ">>> No such game on the list\n";
            }
        }
        else if(input == "quit"){
            break;
        }
        else{
            std::cout << "[ERROR]: I don't undersrand. Let's try again . . . \n\n";
        }
    }
    std::cout << "Okay, see you later! ";


    system("pause");
    return 0;
}
