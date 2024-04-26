// CXI Problems :: 10 :: C++ Program to Calculate the Area of Right Angle Triangle.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <cmath>

double side_base = 0.0;
double side_height = 0.0;
double side_c = 0.0;

double GetInputAndValidate(std::string phrase, double a);
double CalculateArea(const double& a, const double& b);
double CalculateHypotenuse(const double& a, const double& b); 

int main(){
    std::cout << "Hello, I can calculate the Area of Right Angle Triangle!\n";
    std::cout << "But first . . . \n";
    side_base = GetInputAndValidate("Enter length of triangle's base: ", side_base);
    side_height = GetInputAndValidate("Enter length of triangle's height: ", side_height);

    std::cout << "The Area of Scalene Triangle is " << CalculateArea(side_base, side_height) << '\n';
    std::cout << "And as bonus here is the hypotenuse: " << CalculateHypotenuse(side_base, side_height) << '\n';
    
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

double GetInputAndValidate(std::string phrase, double a){
    do {
        std::cout << phrase;
        std::cin >> a;
        if (std::cin.fail() || a == 0){
            std::cout << "[ERROR]: Invalid Input: use numbers to represent a side length of triangle (can't be '0')\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            return a;
        }
    } while(true);
}

double CalculateArea(const double& a, const double& b){
    double area = (0.5 * a * b); //bc right triangle is half a square or a rectangle
    area = std::round(area * 100) * 0.01; //bc division cost more and multiplication
    
    return area;
}

double CalculateHypotenuse(const double& a, const double& b){
    return std::sqrt(a * a + b * b);
}
