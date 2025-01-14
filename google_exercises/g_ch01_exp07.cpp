#include <iostream>

int ShiftDigitLeft(int a){
    return ((a % 100) * 10 + (a / 100));
}

int Remainder(int a){
    return a % 11;
}

int SumWithCheck(int a, int b){
    int sum { a + b };
    if(sum == 9){
        std::cerr << "[ERROR]: 3-Digit Number Only!\n";
        return -1;
    }
    if(sum % 2 != 0){
        if((sum - 11) < 20 && (sum - 11) >= 0){
            return (sum - 11) / 2;
        }
        if((sum + 11) < 20){
            return (sum + 11) / 2;
        }
    }
    return sum / 2;
}

int main(){
    int abc {100};
    
    int bca { ShiftDigitLeft(abc)};
    int cab { ShiftDigitLeft(bca)};

    std::cout << abc << " " << bca << " " << cab;

    int x { Remainder(abc) };
    int y { Remainder(bca) };
    int z { Remainder(cab) };

    int a { SumWithCheck(x, y) };
    int b { SumWithCheck(y, z) };
    int c { SumWithCheck(z, x) };

    std::cout << a << b << c << '\n';

    std::cout << '\n';
    system("pause");
    return 0;
}
