// Create an empty Tic-Tac-Toe board 
// Display the game instructions 
//Determine who goes first
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

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// const char X = 'X';
// const char O = 'O';
// const char EMPTY = ' ';
// const char TIE = 'T';
// const char NO_ONE = 'N';

static void Instructions();
// static void DisplayBoard(const std::vector<char>& board);
// static void AnnounceWinner(char winner, char computer, char human);
// static char Winner(const std::vector<char>& board);
// static char HumanPiece();
// static char OpponentPiece(char piece);
// static char AskYesNo(std::string question);
// static int HumanMove(std::vector<char>& board, char human);
// static int ComputerMove(std::vector<char>& board, char computer);
// static int AskNumber(std::string question, int low = 0, int high);
// static bool IsLegal(const std::vector<char>& board, int move);


int main(){
    //int move;
    //const int NUM_SQUARES = 9;
    //std::vector<char> board(NUM_SQUARES, EMPTY);

    Instructions();
    // char human = HumanPiece();
    // char computer = OpponentPiece(human);
    // char turn = X;

    // DisplayBoard(board);
    // while(Winner(board) == NO_ONE){
    //     if(turn == human){
    //         move = HumanMove(board, human);
    //         board[move] = human;
    //     }
    // }


    system("pause");
    return 0;
}

/* - - - - - - Declaration - - - - - */
void Instructions(){
    std::cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
    std::cout << "Where human brain is compit against silicon processor\n\n";
    std::cout << "Take your move by entering a number: 0 - 8.\n";
    std::cout << "The number corresponds to the desired board position, as illustrated:\n\n";
    
    std::cout << " \t\t0 | 1 | 2\n";
    std::cout << " \t\t---------\n";
    std::cout << " \t\t3 | 4 | 5\n";
    std::cout << " \t\t---------\n";
    std::cout << " \t\t6 | 7 | 8\n\n";

    std::cout << "Prepare yourself, human. The battle is about to begin.\n\n";
}
