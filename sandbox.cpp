#include <iostream>
#include <vector>
#include <algorithm>

bool findNumber(const std::vector<int>& nums, const int find_number){
    return std::find(nums.begin(), nums.end(), find_number) != nums.end();
}

int isGreaterThan(const std::vector<int>& nums, const int than_number){
    auto search_result = std::find_if(nums.begin(), nums.end(), [than_number](int i) {return i > than_number;});
    if(search_result != nums.end()){
        return *search_result;
    }
    return -1;
}

int main(){
    std::vector<int> numbers {12, 34, 45, 56, 78, 89, 90};
    int a = 56;
    int b = 50;
    
    std::cout << std::boolalpha;
    
    std::cout << findNumber(numbers, a) << '\n';
    std::cout << isGreaterThan(numbers, b) << '\n';

    return 0;
}
