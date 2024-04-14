#include <iostream>

//bool IsTrue(bool q);
const int MAX = 8;
int Sum(int a = 1, int b = MAX);
double Sum (double a, double b);


int main() {
    int x = 2;
    int y = 12;
    
    double xx = 3.4;
    double yy = 13.2;

    std::cout << Sum() << '\n';
    std::cout << Sum(x, y) << '\n';
    std::cout << Sum(xx, yy) << '\n';


    system("pause");
    return 0;
}

/* - - - - - - - Declaration - - - - - - - */

int Sum(int a, int b){
    return a + b;
}

double Sum (double a, double b){
    return a + b;
}
