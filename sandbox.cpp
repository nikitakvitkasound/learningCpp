#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include <ctime>
// #include <utility>

bool isTrue(bool a, int b){
    if(b < 2){
        return a;
    }
    return a;
}

bool isTrue(int b, bool a){
    if(b < 2){
        return a;
    }
    return a;
}


int main(){
    std::cout << std::boolalpha;
    std::cout << isTrue(true, 1) << '\n';
    std::cout << isTrue(1, false) << '\n';
}
