#include <iostream>
#include <string>


int main(){
    int number {5};
    std::string sound {};
    if (number % 3 == 0){
        sound += "Pling";
    }
    if (number % 5 == 0){
        sound += "Plang";
    }
    if (number % 7 == 0){
        sound += "Plong";
    }
    if (sound.empty()){
        sound = std::to_string(number);
    }
    std::cout << sound;

    return 0;
}
