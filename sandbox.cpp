#include <iostream>

int modifyValue_val(int x){
    return x + 2;
}
int modifyValue_ref(int& x){
    return x + 4;
}

int main(){

    int test_value = 12;
    std::cout << test_value << ' ';
    
    int a = modifyValue_val(test_value);
    int b = modifyValue_ref(test_value);

    std::cout << a << ' ' << b << ' ' << test_value;

    return 0;
}
