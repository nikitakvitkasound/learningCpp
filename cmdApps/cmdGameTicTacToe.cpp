#include <iostream>

// TODO Add Game Loop
// TODO Add AI
// TODO Add win/lose conditions
// TODO Add Who Goes First?
// TODO Screen Refresh
// TODO Made Board pretty if it's possible

static void ErrorInvalidMsg(){
        std::cout << "[ERROR]: Invallid input!\n";
        std::cin.clear();
        std::cin.ignore(100000, '\n');
}


int main(){
    
    long long unsigned int coord_y;
    long long unsigned int coord_x;
    const std::string coord_y_ref = "*ABC";
    const std::string coord_x_ref = "*123";

    const int ROWS = 4;
    const int COLUMNS = 4;
    const char mark = 'X';
    char board[ROWS][COLUMNS] = {{'*', '1', '2', '3'}, 
                                 {'A', '-', '-', '-'}, 
                                 {'B', '-', '-', '-'}, 
                                 {'C', '-', '-', '-'}};

    for(int i = 0; i < ROWS; ++i){
        for(int j = 0; j < COLUMNS; ++j){
            std::cout << board[i][j];
        }
        std::cout << '\n';
    }
    std::cout << "\n";
    
    std::string input;
    bool input_validated = false;

    while(!(input_validated)){
        std::cin >> input;
        if(input.size() > 2){
            ErrorInvalidMsg();
            continue;
        }
        coord_y = coord_y_ref.find(input[0]);
        coord_x = coord_x_ref.find(input[1]);
        
        if(coord_y == std::string::npos || coord_x == std::string::npos){ 
            ErrorInvalidMsg();
            continue;
        }
        input_validated = true;
    }

    board[coord_y][coord_x] = mark;
    for(int i = 0; i < ROWS; ++i){
        for(int j = 0; j < COLUMNS; ++j){
            std::cout << board[i][j];
        }
        std::cout << '\n';
    }
    std::cout << "\n";

    system("pause");
    return 0;
}
