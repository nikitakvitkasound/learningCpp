
// TODO - Point Number Part
// TODO - unsigned int varaibles (and is it even necessary?)
// TODO - Cosmetics (Names Bets Money)
// TODO - Input Validation
// TODO - Fucntion inputs (optimize)

#include <iostream>
#include <ctime>
#include <array>
#include <algorithm>

const std::array<int, 2> kWinNumbers = {7, 11};
const std::array<int, 3> kLoseNumbers = {2, 3, 12}; 


static int DiceThrow(){
    int d_01 = (rand() % 6) + 1;
    int d_02 = (rand() % 6) + 1;

    //std::cout << '|' << d_01 << '|' << ' ' << '|' << d_02 << '|' << ' ';
    return d_01 + d_02;

}

static bool IsShooter(){
    int s_01 = DiceThrow();
    int s_02 = DiceThrow();
    bool is_shooter;

    while(true){
        if (s_01 == s_02){
            continue;
        }
        else if (s_01 > s_02){
            is_shooter = true;
            break;
        }
        else{
            is_shooter = false;
            break;
        }
    }
    
    return is_shooter;
}

static int DiceThrowResult(int roll, int money, int bet){
    if (std::find(kWinNumbers.begin(), kWinNumbers.end(), roll) != kWinNumbers.end()){
        std::cout << "WIIIN!\n";
        money += bet;
    }
    else if(std::find(kLoseNumbers.begin(), kLoseNumbers.end(), roll) != kLoseNumbers.end()){
        std::cout << "LOOOSEEE!\n";
        money -= bet;
    }
    else{
        std::cout << "That's point!\n";
        int point_number_win = roll;
        int point_number_lose = 7;
        while(true){
            roll = DiceThrow();
            if (roll == point_number_win){
                std::cout << "You won!";
                money += bet;
                break;
            }
            else if (roll == point_number_lose){
                std::cout << "You lose!";
                money -= bet;
                break;
            }
            else{
                continue;
            }
        }
    }

    return money;
}


int main(){
    srand(static_cast<unsigned int>(time(NULL)));
    
    bool is_game_on = true;
    bool is_player_shooter;
    int money_player = 100;
    int money_ai = 200;
    int betting;
    int dice_roll;

    is_player_shooter = IsShooter();

    while(is_game_on)
    {
        if (money_player == 0 || money_ai == 0){
            break;
        }

        if (is_player_shooter){
            betting = 10;
            dice_roll = DiceThrow();
            money_player = DiceThrowResult(dice_roll, money_player, betting);

            std::cout << money_player;
        }
        else{
            betting = 25;
            dice_roll = DiceThrow();
            money_ai = DiceThrowResult(dice_roll, money_ai, betting);

            std::cout << money_ai;
        }

        

        // throw
            // if 7 or 11 - win (money + bet)
            // if 2, 3, 12 - lose (money - bet)
            // if other number - play point
                // point: if 7 - lose, point number - win
        // adjust money (+/- bet)
        // switch roles (if player true, then ai)
        is_game_on = false;
    }

    return 0;
}
