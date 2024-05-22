// CXI Problems :: 43 :: Guess the Number Game. Hints and counter of attempts made by the user. 
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and checking for corner cases until 'new' problem occurs).

#include <iostream>
#include <ctime>

int main(){
    std::srand(static_cast<unsigned int>(std::time(0)));
    const int RANGE = 100;
    int num_secret = std::rand() % RANGE + 1;
    int num_guess = -1;
    int cnt_guess = 0;

    std::cout << "Hello there! Guess a number between 1 and " << RANGE << "!\n";

    while(num_guess != num_secret){
        std::cout << ">Take a guess: ";
        std::cin >> num_guess;
        if(num_guess > num_secret){
            std::cout << "Too high! Secret number is smaller . . . \n";
            cnt_guess += 1;
        }
        else if (num_guess < num_secret){
            std::cout << "Too low! Secret number is larger . . . \n";
            cnt_guess += 1;
        }
    }
    std::cout << "\nCongrats! You made it, guess number is " << num_guess << "! And it took " << cnt_guess << " guesses to find it out!\n\n";


    system("pause");
    return 0;
}
