#include <iostream>

struct Fraction
{
    int numerator { 0 };
    int denominator { 1 };
};

Fraction getFractionFromUser(){
    Fraction user_fraction{ };
    std::cout << "Enter a value for the numerator: ";
    std::cin >> user_fraction.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> user_fraction.denominator;

    return user_fraction;
}

Fraction MultiplyFractions(const Fraction& one, const Fraction& two){
    return Fraction {(one.numerator * two.numerator), (one.denominator * two.denominator)};
}

int main(){
    Fraction fraction_01 {getFractionFromUser()};
    Fraction fraction_02 {getFractionFromUser()};

    Fraction multiplied {MultiplyFractions(fraction_01, fraction_02)};
    std::cout << multiplied.numerator << '/' << multiplied.denominator << '\n';
    
    return 0;
}
