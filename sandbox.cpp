#include <iostream>

int main(){
    int* ptr_int_01 {new int};
    *ptr_int_01 = 7;
    int* ptr_int_02 { nullptr };
    if(!ptr_int_02){
        ptr_int_02 = new int { 22 };
        std::cout << "memory is allocated!\n";
    }
    std::cout << *ptr_int_01 <<' ' << *ptr_int_02 << '\n';

    delete ptr_int_01;
    ptr_int_01 = nullptr;
    
    delete ptr_int_02;
    ptr_int_02 = nullptr;


    return 0;
}
