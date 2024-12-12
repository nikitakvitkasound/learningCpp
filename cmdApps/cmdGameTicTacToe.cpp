#include <iostream>
#include <vector>
#include <string>
#include <iomanip>


// Create an empty Tic-Tac-Toe board 
// Display the game instructions 
// Determine who goes first
// Display the board
// While nobody has won and it's not a tie
//     If it's the human's turn
//         Get the human's move
//         Update the board with the human's move
//     Otherwise
//         Calculate the computer's move
//         Update the board with the computer's move
//     Display the board
//     Switch turns
// Congratulate the winner or declare a tie

void DisplayBoard(const std::vector<std::string>& board){
    auto position { board.begin() };
    int board_height = 3;
    int board_width = 3;
    
    std::cout << '\n';
    for(int i = 0; i < board_height; ++i){
        std::cout << "              ";   
        for(int j = 0; j < board_width; ++j){
            std::cout << *position;
            if(j != (board_width - 1)){
                std::cout << "  :  ";
            }
            ++position;
        }
        if(i != (board_width - 1)){
            std::cout << "\n              - - - - - - - \n";
        }
    }
    std::cout << '\n';
}

int main(){
    std::vector<std::string> demo_board { "0", "1", "2", "3", "4", "5", "6", "7", "8"};
    DisplayBoard(demo_board);

    return 0;
}
