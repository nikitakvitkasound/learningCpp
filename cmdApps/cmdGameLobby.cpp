#include <iostream>
#include <string>
#include <list>

class Player
{
    friend std::ostream& operator<<(std::ostream& os, const Player& p)
    {
        os << p.m_name;
        return os;
    }

private:
    std::string m_name {};
public:
    Player(const std::string& name = "Jon Doe")
        : m_name { name }
    {
    }

    std::string GetName() const
    {
        return m_name;
    }
};

class Lobby
{
    friend std::ostream& operator<<(std::ostream& os, const Lobby& l)
    {
        for (auto& i : l.lobby){
            os << i << '\n';
        }
        return os;
    }
private:
    std::list<Player> lobby {};
public:
    void AddPlayer(){
        std::string player_name;
        
        std::cout << "\nWhat's player name? ";
        std::cin >> player_name;
        Player new_player { player_name };
        
        std::cout << "\nAdding " << new_player << " to the Lobby . . . \n";
        lobby.push_back(new_player);
    }

    void RemovePlayer(){
        std::cout << "\nRemoving " << *lobby.begin() << " from the Lobby . . . \n";
        lobby.pop_front();
    }
    
    void ShowLobby()
    {
        if(isLobbyEmpty()){
            std::cout << "\nThere is no one in the Lobby! \n\n";
        }
        else{
            std::cout << "\nIn the Lobby: \n";
            for(auto& i : lobby){
                std::cout << " - " << i << '\n';
            }
        }
    }

    void ClearLobby()
    {
        lobby.clear();
        std::cout << "\nthe Lobby is empty . . . \n";
    }

    bool isLobbyEmpty()
    {
        return lobby.empty();
    }
};

void Instructions();

int main(){
    Lobby lobby;
    int choice { };

    std::cout << " _ _ _ GAME LOBBY _ _ _ \n\n";
    do{
        Instructions();
        
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "\nBye-bye!\n";
            break;
        case 1:
            lobby.AddPlayer();
            break;
        case 2:
            lobby.RemovePlayer();
            break;
        case 3:
            lobby.ShowLobby();
            break;
        case 4:
            lobby.ClearLobby();
            break;        
        default:
            std::cout << "\nPlease, input only number 0 - 4!\n";
            break;
        }
    }while(choice != 0);

    
    system("pause");
    return 0;
}

void Instructions(){
    std::cout << "\n0 - Exit the program. \n";
    std::cout << "1 - Add Player to the Lobby. \n";
    std::cout << "2 - Remove Player from the Lobby. \n";
    std::cout << "3 - Show who is inthe Lobby. \n";
    std::cout << "4 - Clear the Lobby. \n\n";
}

