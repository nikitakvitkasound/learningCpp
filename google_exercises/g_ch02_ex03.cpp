#include <iostream>

int Accelerate(int& spd, int amnt){
    return spd + amnt;
}

int main(){
    std::cout << "Set speed: ";
    int speed {};
    std::cin >> speed;

    std::cout << "Set amount of acceleration: ";
    int amount {};
    std::cin >> amount;

    std::cout << "The current speed of the vehicle is " << Accelerate(speed, amount) << ".\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
