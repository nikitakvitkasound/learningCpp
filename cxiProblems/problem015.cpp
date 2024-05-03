// CXI Problems :: 15 :: C++ Program to Find the Size of int, float, double, and char.
// Based on https://github.com/Rustam-Z/cpp-programming/blob/main/README.md list
// by Nikita Kvitka as part of learningCpp (https://github.com/nikitakvitkasound/learningCpp)

#include <iostream>

void GetSizeOf(const int& a);
void GetSizeOf(const float& a);
void GetSizeOf(const double& a);
void GetSizeOf(const char& a);

int main(){
    int user_int;
    std::cout << "Input an integer: ";
    std::cin >> user_int;
    GetSizeOf(user_int);

    float user_float;
    std::cout << "Input an float: ";
    std::cin >> user_float;
    GetSizeOf(user_float);

    double user_double;
    std::cout << "Input a double: ";
    std::cin >> user_double;
    GetSizeOf(user_double);

    char user_char;
    std::cout << "Input a character: ";
    std::cin >> user_char;
    GetSizeOf(user_char);

    std::cout << '\n';
    system("pause");
    return 0;
}


/* - - - - - - Declaration - - - - - */

void GetSizeOf(const int& a){
    std::cout << ">>> You typed int '" << a << "' and it has size of '" << sizeof(a) << "' bit.\n";  
}

void GetSizeOf(const float& a){
    std::cout << ">>> You typed float '" << a << "' and it has size of '" << sizeof(a) << "' bit.\n";
}

void GetSizeOf(const double& a){
    std::cout << ">>> You typed double '" << a << "' and it has size of '" << sizeof(a) << "' bit.\n";     
}

void GetSizeOf(const char& a){
    std::cout << ">>> You typed char '" << a << "' and it has size of '" << sizeof(a) << "' bit.\n";      
}
