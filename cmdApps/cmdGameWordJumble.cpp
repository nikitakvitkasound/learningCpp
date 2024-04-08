#include <iostream>

int main(){
    const int POINTS_COEFF = 10;
    const int POINTS_HIT_FEE = 2;
    const int POINTS_TRY_FEE = 10;
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    std::string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"joystick", "You use your hands to play with it"},
        {"headphones", "You listen music with it"},
        {"glasses", "These might help you see the answer"},
        {"box", "All my stuff I put in ..."},
        {"baseball", "It's America's pastime"}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    std::string word = WORDS[choice][WORD];
    std::string hint = WORDS[choice][HINT];
    int perfect_score = static_cast<int>(word.size()) * POINTS_COEFF;
    int player_core = perfect_score;
    
    std::string jumble = word;
    for (size_t i = 0; i < jumble.size(); ++i){
        size_t index_01 = (static_cast<size_t>(rand()) % jumble.size());
        size_t index_02 = (static_cast<size_t>(rand()) % jumble.size());
        char temp = jumble[index_01];
        jumble[index_01] = jumble[index_02];
        jumble[index_02] = temp;
    }

    std::cout << "\t\t\tWelcome to Word Jumble!\n\n";
    std::cout << "Unscramble the letters to make a word.\n";
    std::cout << "Enter 'hint' for a hint.\n";
    std::cout << "Enter 'quit' to quit the game.\n\n";
    std::cout << "The jumble is: " << jumble << '\n';

    std::string guess;
    std::cout << "Your guess is: ";
    std::cin >> guess;

    while((guess != word) && (guess != "quit")){
        if (guess == "hint"){
            std::cout << hint << '\n';
            player_core = player_core / POINTS_HIT_FEE;
        }
        else{
            std::cout << "Sorry. that's not it . . .\n";
            player_core -= POINTS_TRY_FEE;
        }

        std::cout << "Your guess is: ";
        std::cin >> guess;
    }
    if(guess == word){
        std::cout << "That's '" << guess << "'! You guessed it!\n\n";
        std::cout << "You get '" << player_core << "' points for the win!\n";
        if(player_core != perfect_score){
            std::cout << "You could get '" << perfect_score * POINTS_COEFF << "' points! Next time, don't use hints or guess in one try!\n\n";
        }
        else{
            std::cout << "You are freakishly smart!!\n\n";
        }
    }
    std::cout << "Thanks for playing.\n";


    system("pause");
    return 0;
}
