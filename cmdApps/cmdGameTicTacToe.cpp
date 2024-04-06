#include <iostream>

int main(){
    //const int ROWS = 4;
    //const int COLUMNS = 4;
    //char const X = 'Z';
    // char const O = 'O';
    std::string user_input; 
    // char board[ROWS][COLUMNS] = {{'*', '1', '2', '3'}, 
    //                              {'A', '-', '-', '-'}, 
    //                              {'B', '-', '-', '-'}, 
    //                              {'C', '-', '-', '-'}};
    
    // do{
    //     for(int i = 0; i < ROWS; ++i){
    //         for(int j = 0; j < COLUMNS; ++j){
    //         std::cout << board[i][j];
    //         }
    //     std::cout << '\n';
    //     }
    //     std::cout << '\n';

    //     std::cin >> user_input;
    //     std::cout << user_input[0];
    //     board[2][2] = X;


    // } while(true);

    std::cin >> user_input;
    std::cout << user_input[0] + user_input[1];

    

    system("pause");
    return 0;
}
