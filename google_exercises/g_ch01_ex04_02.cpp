// Euclidian Algorithm - a = b * q + r (remainder)
#include <iostream>

// todo input of nums;

void GCD(int& a, int& b){
    int remainder { a % b };
    if (remainder == 0){
        a = b;
        return;
    }
    a = b;
    b = remainder;
    GCD(a, b);
}

int main(){
    int number_01 { 1701 };
    int number_02 { 3768 };

    if(number_01 < number_02){
        int temp { number_01 };
        number_01 = number_02;
        number_02 = temp;
    }

    GCD(number_01, number_02);

    std::cout << "GCD is " << number_01 << '\n';

    

    std::cout << '\n';
    system("pause");
    return 0;
}



/*
// GCD no recursion
int main(){

    int number_01 { 1701 };
    int number_02 { 3768 };
    
    if(number_01 < number_02){
        int temp { number_01 };
        number_01 = number_02;
        number_02 = temp;
    }
    
    int remainder {};
    do{
        remainder = number_01 % number_02;
        number_01 = number_02;
        number_02 = remainder;

    }while(remainder != 0);

    std::cout << number_01 << " is our GCD!\n";

    std::cout << '\n';
    system("pause");
    return 0;
}
*/

