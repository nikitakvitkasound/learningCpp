#include <iostream>
#include <vector>
#include <algorithm>

bool getSum(std::vector<int> nums, int elem) {
    std::vector<int>::iterator search_result = std::find(nums.begin(), nums.end(), elem);
    return search_result != nums.end();
}

int main(){
    std::vector<int> numbers {1, 2, -5, 14, 26, 0, -69};
    std::cout << std::boolalpha;
    std::cout << getSum(numbers, -5);

    return 0;
}
