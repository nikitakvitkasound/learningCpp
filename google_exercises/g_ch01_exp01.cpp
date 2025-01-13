#include <iostream>

int main(){
    const double FORMULA_PLUS_VALUE { 40.0 };
    const double FORMULA_MULTIPLY_VALUE { 0.25 };
    
    double chirp_number {};
    std::cout << "Number of chirps: ";
    std::cin >> chirp_number;

    double temp_degree { (chirp_number + FORMULA_PLUS_VALUE) * FORMULA_MULTIPLY_VALUE };
    std::cout << "The temperature is: " << temp_degree << " degrees.\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
