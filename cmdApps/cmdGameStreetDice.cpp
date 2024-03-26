
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

    std::cout << '|' << d_01 << '|' << ' ' << '|' << d_02 << '|' << ' ' << '\n';
    return d_01 + d_02;
}

static bool IsShooter(){
    int s_01 = DiceThrow();
    std::cout << "Your throw is " << s_01 << '\n';
    int s_02 = DiceThrow();
    std::cout << "My throw is " << s_02 << '\n';
    bool is_shooter;

    while(true){
        if (s_01 == s_02){
            s_01 = DiceThrow();
            std::cout << "You're throw is " << s_01 << '\n';
            s_02 = DiceThrow();
            std::cout << "My throw is " << s_02 << '\n';
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

static bool IsDiceThrowWin(int& roll){
    bool winner;
    if (std::find(kWinNumbers.begin(), kWinNumbers.end(), roll) != kWinNumbers.end()){
        std::cout << "Roll is " << roll << "and it's a WIN!\n";
        winner = true;
    }
    else if(std::find(kLoseNumbers.begin(), kLoseNumbers.end(), roll) != kLoseNumbers.end()){
        std::cout << "Roll is " << roll << " and it's LOSE!\n";
        winner = false;
    }
    else{
        std::cout << "Roll is " << roll << " and that's a point!\n";
        int point_number_win = roll;
        int point_number_lose = 7;
        while(true){
            roll = DiceThrow();
            if (roll == point_number_win){
                std::cout << "Roll is " << roll << " and it's a WIN for point game!\n";
                winner = true;
                break;
            }
            else if (roll == point_number_lose){
                std::cout << "Roll is " << roll << " and it's a LOSE for point game!\n";
                winner = false;
                break;
            }
            else{
                continue;
            }
        }
    }

    return winner;
}


int main(){
    srand(static_cast<unsigned int>(time(NULL)));
    
    bool is_game_on = true;
    bool is_player_shooter;
    int money_player = 100;
    int money_ai = 200;
    int betting;
    int dice_roll;

    std::cout << "You have " << money_player << "$ and I have " << money_ai << "$ let's play?!\n";
    std::cout << "But first, we must decied who's Shooter! Throw your dices!\n";

    is_player_shooter = IsShooter();

    while(is_game_on)
    {
        if (money_player == 0 || money_ai == 0){
            break;
        }

        if (is_player_shooter){
            std::cout << "You are Shooter and you must bet some money! ";
            std::cin >> betting;
            std::cout << "You're bet is " << betting << "$ and I'll answer you with same amount of money!" << "$\n";
            dice_roll = DiceThrow();
            if (IsDiceThrowWin(dice_roll)){
                money_player += betting;
                money_ai -= betting;
            }
            else{
                money_player -= betting;
                money_ai += betting;
            }

            std::cout << "Now you have " << money_player << "$ in your pocket! And I have " << money_ai << "$\n";
        }
        else{
            std::cout << "I'm Shooter! ";
            betting = 25;
            std::cout << "I bet " << betting << "$\n";
            dice_roll = DiceThrow();
            if(IsDiceThrowWin(dice_roll)){
                money_ai += betting;
                money_player -= betting;
            }
            else{
                money_ai -= betting;
                money_player += betting;
            }

            std::cout << "Now I have " << money_ai << "$ in my pocket! And you have " << money_player << '\n';
        }

        if (is_player_shooter){
            is_player_shooter = false;
            std::cout << "Heeeey, guess what, ";
        }
        else{
            is_player_shooter = true;
            std::cout << "Damn! ";
        }
    }

    return 0;
}
