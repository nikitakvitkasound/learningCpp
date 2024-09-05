#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string input = "102012";
    int sum { };
    int x { };
    char y {'0'};
    for (char c : input){
        std::cout << c << '\n';
        if (c > '2' || c < '0'){
            break;
        }
        x = (c - y);
        sum = 3 * sum + x;
    }
    return 0;
}
