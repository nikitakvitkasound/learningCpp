#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> applyToEach(const std::vector<int>& numbers, const auto& lambda_function){
    std::vector<int> applied_numbers;
    std::transform(numbers.begin(), numbers.end(), std::back_inserter(applied_numbers), lambda_function);
    return applied_numbers;
}

int main(){

    constexpr int factor = 3;
    constexpr auto scale_by_factor = [factor](int i){ return i *= factor;};
    
    std::vector<int> nums { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    std::vector<int> new_nums = applyToEach(nums, scale_by_factor);
    
    for (int item : nums){
        std::cout << item << ' ';
    }
    
    std::cout << '\n';
    
    for (int item : new_nums){
        std::cout << item << ' ';
    }
    return 0;
}
