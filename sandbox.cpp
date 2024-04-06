#include <iostream>

int main(){
    const int ROWS = 6;
    const int COLUMNS = 6;
    char test[ROWS][COLUMNS] = {{'1', '2', '3'}, {'A', 'B', 'C'}, {'3', '4', '5'}};
    
    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j){
            std::cout << test[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}
