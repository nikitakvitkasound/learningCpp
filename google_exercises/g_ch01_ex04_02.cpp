// Euclidian Algorithm - a = b * q + r (remainder)
#include <iostream>

void GCD(int& a, int& b){
    int remainder { a % b };
    a = b;
    b = remainder;
    
    if(remainder == 0){
        return;
    }
    GCD(a, b);
}

int main(){
    std::cout << "Do you want to know Greatest common divisor of two numbers?\n";
    
    int number_01 {};
    int number_02 {};
    do{
        std::cout << "Input two integer numbers separated by space, i.e. 12 25: ";
        if(!(std::cin >> number_01 >> number_02)){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            std::cout << "[ERROR]: only integer numbers are allowed! Try again!\n";
            continue;
        }
        else{
            std::cout << ">> gdc(" << number_01 << ", " << number_02 << ") is ";
            GCD(number_01, number_02);
            std::cout << number_01 << '\n';          
            break;
        }
    }while(true);

    std::cout << '\n';
    system("pause");
    return 0;
}


/*
// GCD no recursion
int main(){

    int number_01 { 1701 };
    int number_02 { 3768 };
    
    if(number_01 < number_02){
        int temp { number_01 };
        number_01 = number_02;
        number_02 = temp;
    }
    
    int remainder {};
    do{
        remainder = number_01 % number_02;
        number_01 = number_02;
        number_02 = remainder;

    }while(remainder != 0);

    std::cout << number_01 << " is our GCD!\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
*/

