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

    int GetMood() const{
        return m_hunger + m_boredom;
    }

    void PassTime(int time = 1){
        m_hunger += time;
        m_boredom += time;
    }

public:
    Critter(int hunger = 0, int boredom = 0)
        : m_hunger { hunger }
        , m_boredom { boredom }
    {
    }

    void Talk(){
        std::cout << GetMood();
    }

    void Eat(int food = 4);
    void Play(int fun = 4);
};

int main(){
    Critter gadget {4, 2};
    gadget.Talk();
}
