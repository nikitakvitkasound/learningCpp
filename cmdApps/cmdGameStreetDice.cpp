#include <iostream>
#include <ctime>
#include <array>
#include <algorithm>


// TODO - Choose Shooter
// TODO - Money Bank
// TODO - Betting System (Withdraw and Cashin)
// TODO - Players Turn (Part of Choose Shooter)
// TODO - AI Turn (Part of Choose Shooter)
// TODO - Throws: Refractor existing code
// TODO - Refactor all code (put in function if it's neccessary) but maintain streamline game loop code
// TODO - add visual <...> and delay output to slow the gameplay flow


static int Throw(){
    int d1 = (rand() % 6) + 1;
    int d2 = (rand() % 6) + 1;
    int r = d1 + d2;

    std::cout << '|' << d1 << '|' << " " << '|' << d2 << '|' << " ::: roll is " << r << '\n';

    return r;
}

int main(){
    srand(static_cast<unsigned int>(time(0)));

    // Game Rules
    std::array<int, 2> throws_win = {7, 11};
    std::array<int, 3> throws_lose = {2, 3, 12};
    const int kPointNumberLose = 7;
    int point_number_win;
    bool throwing_point = false;

    int roll = Throw();
    if (std::find(throws_win.begin(), throws_win.end(), roll) != throws_win.end()){
        std::cout << "win!";
    }
    else if (std::find(throws_lose.begin(), throws_lose.end(), roll) != throws_lose.end()){
        std::cout << "lose!";
    }
    else{
        std::cout << "That's a point!! And your point is " << roll << '\n'; 
        std::cout << "Roll again, but don't roll " << kPointNumberLose << " you'll lose! You must roll the point to win!\n";
        point_number_win = roll;
        throwing_point = true;
        
        while (throwing_point)
        {
            roll = Throw();
            
            if (roll == point_number_win){
                std::cout << "You won!!!\n";
                throwing_point = false;
            }
            else if (roll == kPointNumberLose){
                std::cout << "You lost!!!\n";
                throwing_point = false;
            }
        }
    }


    return 0;
}
