#include <iostream>
//TODO
/* 
Critter class:
 -m_hunger
 -m_boredom
 -getmood()
 +talk()
 +eat()
 +play()
 -passtime()

Flow & Utility:
 -input validation
 -system("pause")
*/

// main():
    // Create a critter
    // While the player doesn’t want to quit the game
        // Present a menu of choices to the player
        // If the player wants to listen to the critter
            // Make the critter talk
        // If the player wants to feed the critter
            // Make the critter eat
        // If the player wants to play with
            // Make the critter play


class Critter{
private:
    int m_hunger {};
    int m_boredom {};
    int m_sleep_time{};

    int GetMood() const{
        return m_hunger + m_boredom;
    }

    void PassTime(int time = 1){
        m_hunger += time;
        m_boredom += time;
    }

public:
    Critter(int hunger = 0, int boredom = 0, int sleep_time = 6)
        : m_hunger { hunger }
        , m_boredom { boredom }
        , m_sleep_time {sleep_time}
    {
    }

    void Talk(){
        int mood = GetMood();
        if (mood > 15){
            std::cout << "I'm mad.\n";
        }
        else if (mood > 10){
            std::cout << "I'm frustrated.\n";
        }
        else if (mood > 5){
            std::cout << "I'm okay.\n";
        }
        else{
            std::cout << "I'm happy.\n";
        }
        PassTime();
    }

    void Eat(int food = 4){
        std::cout << "Brrrrp.\n";
        m_hunger -= food;
        if (m_hunger < 0){
            m_hunger = 0;
        }
        PassTime();
    }

    void Play(int fun = 4){
        std::cout << "Wheee!\n";
        m_boredom -= fun;
        if (m_boredom < 0){
            m_boredom = 0;
        }
        PassTime();
    }

    void Sleep(int time = 1){
        std::cout << "Zzzzz...\n";
        PassTime(time);
    }
};

constexpr int CHOICES { 4 };

void DisplayInstructions(){
    std::cout << "Critter caretaker, what do you want to do?\n";
    std::cout << "0 - Quit\n";
    std::cout << "1 - Listen to your critter\n";
    std::cout << "2 - Feed your critter\n";
    std::cout << "3 - Play with your critter\n";
    std::cout << "4 - Let him sleep\n\n";
}

void GetInput(int& input){
    while(true){
        std::cout << ">>> ";
        std::cin >> input;
        if(std::cin.fail() || input < 0 || input > CHOICES){
            std::cout << "ERROR: Sorry, but " << input << " isn't a valid choice.\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        break;
    }
}

int main(){
    Critter gadget;
    
    int choice;
    do{
        DisplayInstructions();
        GetInput(choice);
        switch (choice)
        {
        case 0:
            std::cout << "Good-bye.\n";
            break;
        case 1:
            gadget.Talk();
            break;
        case 2:
            gadget.Eat();
            break;
        case 3:
            gadget.Play();
            break;
        case 4:
            gadget.Sleep();
            break;
        default:
            std::cout << "ERROR: Sorry, but " << choice << " isn't a valid choice.\n";
            break;
        }
    }while(choice != 0);

    return 0;
}
