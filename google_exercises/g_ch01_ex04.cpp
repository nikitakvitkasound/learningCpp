/*
Create a main function that processes one guess from the player, and provides hints.
Add what we need to allow for multiple guesses until the player guesses the number.
*/

#include <iostream>
#include <random>

int main(){
    std::random_device rd_seed;
    std::uniform_int_distribution<int> rd_generator {1, 100};
    // int secret_number = rd_generator(rd_seed);

    std::cout << '\n';
    system("pause");
    return 0;
}
