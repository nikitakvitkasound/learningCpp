#include <iostream>
#include <vector>

int main(){
    std::cout << "Hello, world!\n";
    std::vector<int> nums { 1, 2, 3, 4, 5};
    int x { 3 };
    --x;
    *(nums.begin() + (x)) = 22;
    for(int i : nums){
        std::cout << i << ' ';
    }
    return 0;
}
