#include <iostream>
#include <vector>

bool isNull(int* const ptr){
    return ptr == nullptr;
}

void SwapNumbers(int* const p_x, int* const p_y){
    int temp {*p_x};
    *p_x = *p_y;
    *p_y = temp;
}

int main(){
    int a { 10 };
    int* ptr_a { &a };
    int* ptr { nullptr };

    std::cout << std::boolalpha;
    std::cout << isNull(ptr_a) << '\n';
    std::cout << isNull(ptr) << '\n';

    int x = 2;
    int y = 4;
    std::cout << "Before: " << x << ' ' << y << '\n';
    SwapNumbers(&x, &y);
    std::cout << "After: " << x << ' ' << y << '\n';

    int* ptr_dynamic { new int(42) };
    std::cout << *ptr_dynamic << '\n';
    delete ptr;

    return 0;
}
