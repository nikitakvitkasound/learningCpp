#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto iter = nums.begin(); iter != nums.end(); ++iter){
        std::cout << "before: " << *iter << '\n';
        (*iter)++;
        std::cout << "after: " << *iter << '\n';
    }
    return 0;
}
