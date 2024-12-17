#include <iostream>
#include <vector>

bool isNull(int* const ptr){
    return ptr == nullptr;
}

int main(){
    int a { 10 };
    int* ptr_a { &a };
    int* ptr { nullptr };

    std::cout << std::boolalpha;
    std::cout << isNull(ptr_a) << '\n';
    std::cout << isNull(ptr) << '\n';

    return 0;
}
