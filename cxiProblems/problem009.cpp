// CXI Problems :: 9 :: C++ Program to Calculate the Area of an Equilateral Triangle.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>
#include <string>
#include <cmath>

void GetInputAndValidate(std::string phrase, double& a);
void CalculateArea(std::string phrase, const double& a);

int main(){
    double side = 0.0;
    GetInputAndValidate("Enter length of side: ", side);
    CalculateArea("The Area of Equilateral Triangle is ", side);
    
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void GetInputAndValidate(std::string phrase, double& a){
    do {
        std::cout << phrase;
        std::cin >> a;
        if (std::cin.fail() || a == 0){
            std::cout << "[ERROR]: Invalid Input: use numbers to represent a side length of triangle (can't be '0').\n";
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
    } while(true);
}

void CalculateArea(std::string phrase, const double& a){
    double area = (std::sqrt(3.0) / 4) * (a * a); // Area of Equilateral Triangle Using Heron's Formula (after simplify Heron's Formula)
    area = std::round(area * 100) / 100;
    
    std::cout << phrase << area << '\n';
}
