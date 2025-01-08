#include <iostream>
#include <random>

int main(){
    const int MIN_NUMBER { 1 };
    const int MAX_NUMBER { 100 };
    const int QUIT_NUMBER { -1 };
    
    std::random_device rd_seed;
    std::uniform_int_distribution<int> rd_generator {MIN_NUMBER, MAX_NUMBER};
    int secret_number = rd_generator(rd_seed);
    
    int user_input {};
    do{
        std::cout << "Guess a number from " << MIN_NUMBER << " to " << MAX_NUMBER << " or " << QUIT_NUMBER << " to quit: ";
        if(!(std::cin >> user_input)){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "[ERROR]: only numbers from " << MIN_NUMBER << " to " << MAX_NUMBER << " or " << QUIT_NUMBER << " to quit!\n";
            continue;
        }

        if(user_input == -1){
            std::cout << "Okay, bye-bye! See you later!\n";
            break;
        }

        if(user_input < secret_number){
            std::cout << ">> Your number is less than the secret number . . . \n";
        }
        else if(user_input > secret_number){
            std::cout << ">> Your number is larger than the secret number . . . \n";
        }
        else{
            std::cout << "Congrats! You guessed it right! It's " << user_input << ", see you later!\n";
        }
    }while(user_input != secret_number && user_input != QUIT_NUMBER);


    std::cout << '\n';
    system("pause");
    return 0;
}
