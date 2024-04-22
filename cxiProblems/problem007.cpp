// CXI Problems :: 7 :: C++ Program to Calculate the Area and Circumference of a Circle.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)
#include <iostream>
#include <cmath>

const double PI = 3.14159265359;
const double CIR_COEFF = 2.0;
const double ROUND_COEFF = 100;

void GetInputAndValidate(double& a);
double GetCircleArea(const double& a);
double GetCircleCir(const double& a);

int main(){
    std::cout << "Hello, I can calculate the Area and Circumference of a Circle!\n";
    std::cout << "But first, ";
    double user_input_radius;
    GetInputAndValidate(user_input_radius);
    
    std::cout << "the Area is '" << GetCircleArea(user_input_radius) << "' and Circumference is '" << GetCircleCir(user_input_radius) << "'\n\n";


    system("pause");
    return 0;
}

/* - - - - - - Declaration - - - - - */

void GetInputAndValidate(double& a){
    do{
        std::cout << "I need to know radius of the Circle: ";
        std::cin >> a;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(100000, '\n');
            continue;
        }
        else{
            break;
        }
        std::cout << '\n';
    } while (true);
}

double GetCircleArea(const double& a){
    double area = PI * a * a;
    return std::round(area * ROUND_COEFF) / ROUND_COEFF;
}
double GetCircleCir(const double& a){
    double cir = PI * a * CIR_COEFF;
    return std::round(cir * ROUND_COEFF) / ROUND_COEFF;

    //I think it's more readable than that:
    //return std::round((PI * a * CIR_COEFF) * ROUND_COEFF) / ROUND_COEFF;
}
