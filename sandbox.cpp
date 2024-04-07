#include <iostream>

int main(){
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    std::string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"joystick", "you use your hand to play with it"},
        {"headphones", "you listen music with it"},
        {"word3", "hint3"},
        {"word4", "hint4"},
        {"word5", "hint5"}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    std::string hint = WORDS[choice][HINT];
    std::string jumble = WORDS[choice][WORD];

    std::cout << jumble;

    for (unsigned int i = 0; i < jumble.size(); ++i){
        size_t index_01 = (static_cast<size_t>(rand()) % jumble.size());
        size_t index_02 = (static_cast<size_t>(rand()) % jumble.size());
        char temp = jumble[index_01];
        jumble[index_01] = jumble[index_02];
        jumble[index_02] = temp;
    }

    std::cout << jumble;

    return 0;
}
