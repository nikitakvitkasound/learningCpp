// CXI Problems :: 11 :: C++ Program to Calculate the Area and Perimeter of a Rectangle.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <cmath>

void GetInputAndValidate(std::string phrase, double& a);
double CalculateArea(const double& a, const double& b);
double CalculatePerimeter(const double& a, const double& b);

int main(){
    std::cout << "Hello, I can calculate the Area and Perimeter of a Rectangle!\n";

    double side_a;
    double side_b;
    GetInputAndValidate("Input length of side A: ", side_a);
    GetInputAndValidate("Input length of side B: ", side_b);

    std::cout << "The Are of the Rectangle is '" << CalculateArea(side_a, side_b) << "' and Perimeter is '" << CalculatePerimeter(side_a, side_b) << "'.\n";

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

double CalculateArea(const double& a, const double& b){
    return std::round(a * b * 100) * 0.01; // round to 2 decimal point
}

double CalculatePerimeter(const double& a, const double& b){
    return std::round(2 * (a + b) * 100) * 0.01;
}
