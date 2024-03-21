#include <iostream>
#include <ctime>

int main(){
    srand(static_cast<unsigned int>(time(NULL)));

    int dice_01 = (rand() % 6) + 1;
    int dice_02 = (rand() % 6) + 1;
    
    // DICE IT

    return 0;
}
