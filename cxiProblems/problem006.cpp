// CXI Problems :: 6 :: c++ Program to Compute Quotient and Remainder.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <cmath>

static void GetInputAndValidate(std::string phrase, double& a);

int main(){
    std::cout << "Let's calculate Quotient and Remainder of two numbers\n";

    double user_input_a;
    double user_input_b;
    GetInputAndValidate("Input number #1: ", user_input_a);
    GetInputAndValidate("Input number #2: ", user_input_b);

    double quotient = std::floor(user_input_a / user_input_b);
    double remainder = user_input_a - quotient * user_input_b;
    std::cout << "\n> Quotient: " << quotient << ".\n> Remainder: " << remainder << ".\n\n";

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

static void GetInputAndValidate(std::string phrase, double& a){
    do{
        std::cout << phrase;
        std::cin >> a;

        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    }while (true);
}
