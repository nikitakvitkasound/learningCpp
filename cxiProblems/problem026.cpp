// CXI Problems :: 26 :: C++ Program to Find all Roots of a Quadratic equation.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
// *** Problems are kind of redundant. From now on I will do simple implementation (without input validation and chacking for corner cases)
// *** Until 'new' problem occurs.

#include <iostream>
#include <cmath>

int main(){
    float a;
    float b;
    float c;
    float D; //discriminant
    float x_01;
    float x_02;
    // I use magic numbers down below because there is no point to declare variables. There is only one way to solve quadratic equation.
    // If we are talking about school math.

    std::cout << "Hello, I can help you to solve any quadratic equation (ax^2 + bx + c = 0).\n";
    std::cout << "> Enter coefficients a, b and c (they are real numbers and a != 0 [MUST!!])\n"; 
    std::cout << ">> Input like '12 3 4' will result as 12x^2 + 3x + 4 = 0\n";
    std::cout << ">>> ";
    std::cin >> a >> b >> c;

    D = (b * b) - (4 * a * c);
    if(D < 0){
        std::cout << "The discriminant is equal to " << D << " (D < 0). There is no possible (real) roots for this equation.\n\n";
    }
    else if(D > 0){
        x_01 = ((-1 * b) + std::sqrt(D)) / (2 * a);
        x_02 = ((-1 * b) - std::sqrt(D)) / (2 * a);
        std::cout << "Because the descriminant is equal to " << D << " (D > 0). There are two answers . . .\n";
        std::cout << "x = " << x_01 << " or x = " << x_02 << ".\n\n";
    }
    else{
        x_01 = ((-1 * b) + std::sqrt(D)) / (2 * a);
        std::cout << "Because the descriminant is equal to " << D << " (D = 0). There is only one answer . . .\n";
        std::cout << "x = " << x_01 << ".\n\n";
    }


    system("pause");
    return 0;
}
