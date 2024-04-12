#include <iostream>

int Sum(int a, int b);
int Magic(int a, int b);

int main() {
    int x = 2;
    int y = 4;
    std::cout << Sum(x, y) << '\n';
    std::cout << Magic(x, y) << '\n';
    
    system("pause");
    return 0;
}

/* - - - - - - - - - Declaration - - - - - - - - - */
int Sum(int a, int b){
    return a + b;
}

int Magic(int a, int b){
    int c = Sum(a, b);
    return c * 22;
}


