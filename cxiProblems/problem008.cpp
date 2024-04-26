// CXI Problems :: 8 :: C++ Program to Calculate the Area of a Scalene Triangle.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <cmath>

double side_a = 0.0;
double side_b = 0.0;
double side_c = 0.0;

static double GetInputAndValidate(std::string phrase, double a);
static double CalculateArea(const double& a, const double& b, const double& c);

int main(){
    side_a = GetInputAndValidate("Enter length of side A: ", side_a);
    side_b = GetInputAndValidate("Enter length of side B: ", side_b);
    side_c = GetInputAndValidate("Enter length of side C: ", side_c);

    std::cout << "The Area of Scalene Triangle is " << CalculateArea(side_a, side_b, side_c) << '\n';
    
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

static double GetInputAndValidate(std::string phrase, double a){
    do {
        std::cout << phrase;
        std::cin >> a;
        if (std::cin.fail() || a == side_a || a == side_b || a == side_c){
            std::cout << "[ERROR]: Invalid Input: use numbers to represent a side length of triangle (can't be '0'). Every side should be different length!\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            return a;
        }
    } while(true);
}

static double CalculateArea(const double& a, const double& b, const double& c){
    double s = (a + b + c) / 2; //Semi perimeter for Heron’s formula, 2 is just coefficient
    double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
    
    area = std::round(area * 100) / 100; //round to 2 decimal point

    return area;
}
