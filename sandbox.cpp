#include <iostream>

int main(){
    int base {2};
    int num {89};
    int eggs { };
    while(num != 0){
        // if(num % base != 0){
        //     ++eggs;
        // }
        eggs += num % base;
        num = num / base;
    }
    std::cout << eggs;

    return 0;
}

