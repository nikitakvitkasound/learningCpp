#include <iostream>


int main() {
    int x = 2;
    if (x == 2){
        int x = 10;
        std::cout << x << '\n';
    }{
        int x = 22;
        std::cout << "hello " << x << '\n';
    }
    std::cout << x << '\n';


    system("pause");
    return 0;
}

