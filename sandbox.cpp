#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> answer;
    for (std::vector<int>::size_type i = 0; i < nums.size(); ++i) {
        for (std::vector<int>::size_type j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                answer = {static_cast<int>(i), static_cast<int>(j)};
                return answer;
            }
        }
    }
    return answer;
}

int main() {
    std::vector<int> input = {2, 7, 11, 15};
    int sum = 9;
    std::vector<int> pos = twoSum(input, sum);
    std::cout << pos[0] << ", " << pos[1];
    return 0;
}
