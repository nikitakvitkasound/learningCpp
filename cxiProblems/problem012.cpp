// CXI Problems :: 12 :: C++ Program to Calculate the Area and Perimeter of a Square.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <cmath>

void GetInputAndValidate(std::string phrase, double& a);
double CalculateArea(const double& a);
double CalculatePerimeter(const double& a);

int main(){
    std::cout << "Hello, I can calculate the Area and Perimeter of a Rectangle!\n";

    double side;
    GetInputAndValidate("Input length of Square's side: ", side);

    std::cout << "The Are of the Square is '" << CalculateArea(side) << "' and Perimeter is '" << CalculatePerimeter(side) << "'.\n";

    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void GetInputAndValidate(std::string phrase, double& a){
    do{
        std::cout << phrase;
        std::cin >> a;
        if(std::cin.fail() || a == 0){
            std::cout << "[ERROR]: Invalid Input: use numbers to represent a side length of rectangle (can't be '0')\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    } while(true);
}

double CalculateArea(const double& a){
    return std::round(a * a * 100) * 0.01; // round to 2 decimal point
}

double CalculatePerimeter(const double& a){
    return std::round(4 * a * 100) * 0.01;
}
