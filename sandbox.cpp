#include <iostream>
#include <vector>

void test();
void test(std::string str1);
void test(std::string str1, std::string str2);

int main(){
    test();
    test("test");
    test("test2", "test2");
    return 0;
}

void test(){
    std::cout << "Hello!\n";
}

void test(std::string str1){
    std::cout << "Hello T2\n";
    std::cout << str1 << '\n';
}
void test(std::string str1, std::string str2){
    std::cout << "Hello T3\n";
    std::cout << str1 << " " << str2 << '\n';
}
