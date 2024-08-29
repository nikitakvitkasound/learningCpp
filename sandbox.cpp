#include <iostream>

int difference(int range){
    int sum {};
    int square {};

    for(int i = 1; i <= range; ++i){
        sum += i;
        square += i * i;
    }
    return (sum * sum) - square;
}

int main(){
    int range {5};
    std::cout << difference(range);
    return 0;
}
