#include <iostream>

int ReverseInteger(int a);

int main(){

    int original_number {};
    std::cout << "Input number: ";
    std::cin >> original_number;

    int reversed_number { ReverseInteger(original_number) };
    std::cout << "Reverse it: " << reversed_number << '\n';

    
    std::cout << "Subtract: " << original_number << " - " << reversed_number;
    original_number -= reversed_number;
    std::cout << " = " << original_number << '\n';

    reversed_number = ReverseInteger(original_number);
    std::cout << "Reverse it: " << reversed_number << '\n';

    std::cout << "Add: " << reversed_number << " + " << original_number << " = " << reversed_number + original_number << '\n';


    std::cout << '\n';
    system("pause");
    return 0;
}


// - - - - Declaration - - - - //

int ReverseInteger(int a){
    int reversed{};
    while(a > 0){
        reversed = (reversed * 10) + (a % 10);
        a /= 10;
    }
    return reversed; 
}
