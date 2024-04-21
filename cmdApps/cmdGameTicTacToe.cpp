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

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

static void Instructions();
static void DisplayBoard(const std::vector<char>& board);
static void AnnounceWinner(char winner, char computer, char human);
static char HumanPiece();
static char OpponentPiece(char piece);
static char AskYesNo(std::string question);
static char Winner(const std::vector<char>& board);
static int HumanMove(std::vector<char>& board, char human);
static int ComputerMove(std::vector<char> board, char computer);
static int AskNumber(std::string question, int high, int low = 0);
static bool IsLegal(int move, const std::vector<char>& board);


int main(){
    int move;
    const int NUM_SQUARES = 9;
    std::vector<char> board(NUM_SQUARES, EMPTY);

    Instructions();
    char human = HumanPiece();
    char computer = OpponentPiece(human);
    char turn = X;

    DisplayBoard(board);
    while(Winner(board) == NO_ONE){
        if(turn == human){
            move = HumanMove(board, human);
            board[move] = human;
        }
        else{
            move = HumanMove(board, human);
            board[move] = human;
        }
        DisplayBoard(board);
        turn = OpponentPiece(turn);
    }

    AnnounceWinner(Winner(board), computer, human);


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

static char AskYesNo(std::string question){
    char response;
    do{
        std::cout << question << " (y/n): ";
        std::cin >> response;
    }while(response != 'y' && response != 'n');

    return response;
}

static int AskNumber(std::string question, int high, int low = 0){
    int number;
    do{
        std::cout << question << " (" << low << " - " << high << ": ";
        std::cin >> number;
    }while(number > high || number < low);

    return number;
}

static char HumanPiece(){
    char go_first = AskYesNo("Do you require the first move?");
    if (go_first == 'y'){
        std::cout << "\nThen take the first move. You will need it.\n";
        return X;
    }
    else{
        std::cout << "\nYour bravery will be your undoing...I will go first.\n";
        return 0;
    }
}

static char OpponentPiece(char piece){
    if (piece == X){
        return O;
    }
    else{
        return X;
    }
}

static void DisplayBoard(const std::vector<char>& board){
    std::cout << "\n\t\t" << board[0] << " | " << board[1] << " | " << board[2];
    std::cout << "\n\t\t---------\n";
    std::cout << "\n\t\t" << board[3] << " | " << board[4] << " | " << board[5];
    std::cout << "\n\t\t---------\n";
    std::cout << "\n\t\t" << board[6] << " | " << board[7] << " | " << board[8];

}

static char Winner(const std::vector<char>& board){
    // all possible winning rows
    const int WINNING_ROWS[8][3] = {{0, 1, 2}, 
                                    {3, 4, 5}, 
                                    {6, 7, 8}, 
                                    {0, 3, 6},
                                    {1, 4, 7},
                                    {2, 5, 8},
                                    {0, 4, 8},
                                    {2, 4, 6}};
    const int TOTAL_ROWS = 8;
    for(int row = 0; row < TOTAL_ROWS; ++row){
        if((board[WINNING_ROWS[row][0]] != EMPTY) && (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) && (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]])){
            return board[WINNING_ROWS[row][0]];
        }
    }
    if (count(board.begin(), board.end(), EMPTY) == 0){
        return TIE;
    }
    return NO_ONE;
}

static bool IsLegal(int move, const std::vector<char>& board){
    return (board[move] == EMPTY);
}


static int HumanMove(std::vector<char>& board, char human){
    int move = AskNumber("Where will you move?", (board.size() - 1));
    while(!(IsLegal(move, board))){
        std::cout << "\nThat square is already occupied, foolish human.\n";
        move = AskNumber("Where will you move?", (board.size() - 1));
    }
    std::cout << "Fine...\n";

    return move;
}

static int ComputerMove(std::vector<char> board, char computer){
    unsigned int move = 0;
    bool found = false;

    while(!found && move < board.size()){
        if(IsLegal(move, board)){
            board[move] = computer;
            found = Winner(board) == computer;
            board[move] = EMPTY;
        }
        if(!found){
            ++move;
        }
    }

}
