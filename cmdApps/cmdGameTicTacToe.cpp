#include <iostream>
#include <vector>
#include <string>
#include <ctime>


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

void DisplayGreetings();
void DisplayInstructions();
void DisplayBoard(const std::vector<std::string>& board);
bool isComputerFirst();
void ComputerMove(std::vector<std::string>& board, const char& mark_computer, const std::string& empty_space, const int& board_size); // brute force AI, just fill a random empty square.
void HumanMove(std::vector<std::string>& board, const char& mark, const std::string& empty_space);


int main(){
    const char MARK_FIRST { 'X' };
    const char MARK_SECOND { 'O' };
    char mark_computer { MARK_FIRST };
    char mark_human { MARK_SECOND };
        
    const std::string EMPTY_SPACE {" "};
    std::vector<std::string> play_board {9, EMPTY_SPACE};
    int board_size {static_cast<int>(play_board.size())}; // for AI
    std::srand(static_cast<unsigned int>(time(0)));       // for AI

    DisplayGreetings();
    DisplayInstructions();

    bool turn_computer { isComputerFirst() };
    if(turn_computer){
        std::cout << "I have first move!\n";
        ComputerMove(play_board, mark_computer, EMPTY_SPACE, board_size);
        DisplayBoard(play_board);
    }
    else{
        std::cout << "You have first move!\n";
        mark_human = MARK_FIRST;
        mark_computer = MARK_SECOND;
        HumanMove(play_board, mark_human, EMPTY_SPACE);
        DisplayBoard(play_board);
    }

    HumanMove(play_board, mark_human, EMPTY_SPACE);
    DisplayBoard(play_board);

    


    return 0;
}

// - - - - Declaration - - - - //

void DisplayGreetings(){
    std::cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
    std::cout << "The human brain is pit against a silicon processor!\n\n";
}

void DisplayInstructions(){
    std::cout << "Make your move known by entering a number, 0 - 8. The number\n";
    std::cout << "corresponds to the desired board position, as illustrated:\n";
    
    std::vector<std::string> demo_board { "0", "1", "2", "3", "4", "5", "6", "7", "8"};
    DisplayBoard(demo_board);

    std::cout << "Prepare yourself, human. The battle is about to begin.\n";
}

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
                std::cout << " : ";
            }
            ++position;
        }
        if(i != (board_width - 1)){
            std::cout << "\n              - - - - - \n";
        }
    }
    std::cout << "\n\n";
}

bool isComputerFirst(){
    char answer { };
    do{
        std::cout << "Do you require the first move? (y/n): ";
        std::cin >> answer;
        if(answer == 'y'){
            return false;
        }
        else if (answer == 'n'){
            return true;
        }
        else{
            std::cout << "[ERROR] You must input only 'y' for yes and 'n' for no! Let's try again...\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
        }
    }while(true);
}

void ComputerMove(std::vector<std::string>& board, const char& mark, const std::string& empty_space, const int& board_size){
    size_t check_square { };
    while(true){
        check_square = static_cast<size_t>(std::rand() % board_size);
        if(board[check_square] == empty_space){
            board[check_square] = mark;
            break;
        }
        else{
            continue;
        }
    }
}

void HumanMove(std::vector<std::string>& board, const char& mark, const std::string& empty_space){
    size_t square { };
    std::cin >> square;
    if(board[square] == empty_space){
        board[square] = mark;
    }
}
