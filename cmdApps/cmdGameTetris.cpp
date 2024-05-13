// Command-line Tetris
// Based on tutorial of Javidx9 https://www.youtube.com/watch?v=8OK8_tHeCIA
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/LearningCpp)

#include <iostream>

std::wstring tetromino[7];

int Rotate(int px, int py, int r);

int main(){



    return 0;
}


/* - - - - - - Declaration - - - - - */

int Rotate(int px, int py, int r){
    switch(r % 4){
        case 0: return py * 4 + px;                 // 0 degrees turn
        case 1: return 12 + py - (px * 4) - px;     // 90 degress turn
        case 2: return 15 - (py * 4) - px;          // 180 degrees turn
        case 3: return 3 - py + (px * 4);
    }
    return 0;
}
