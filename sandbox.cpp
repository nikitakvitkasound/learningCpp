#include <iostream>

void Test2(){
    std::cout << "Koook";
}

int Test1(int a, int b){
    Test2();
    return a + b;
}

int main(){
    std::cout << "hello!";
    Test1(2, 5);

    return 0;
}
