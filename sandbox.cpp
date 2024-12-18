#include <iostream>

class Test
{
public:
    int date { };
    int fate { };
    int bait { };
};

int main(){
    Test test {1, 2, 3};
    std::cout << test.date << test.fate << test.bait;
}
