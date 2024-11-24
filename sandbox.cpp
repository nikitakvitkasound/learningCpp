#include <iostream>
#include <vector>
#include <algorithm>

// Part 3: Use std::copy_if to create a new vector containing all numbers greater 
// than a variable min_value (e.g., min_value = 50) and print the new vector.

int findOddNumber(const std::vector<int>& nums){
    auto search_result = std::find_if(nums.begin(), nums.end(), [](int i){return i % 2 != 0;});
    if(search_result != nums.end()){
        return *search_result;
    }
    return -1;
}

int findDivisiableToThreeAndFive(const std::vector<int>& nums){
    auto search_result = std::find_if(nums.begin(), nums.end(), [](int i){return i % 3 == 0 && i % 5 == 0;});
    if(search_result != nums.end()){
        return *search_result;
    }
    return -1;
}

std::vector<int> findAllNumberGreaterThan(const std::vector<int>& nums, const int& than_number){
    std::vector<int> search_result { };
    std::copy_if(nums.begin(), nums.end(), std::back_inserter(search_result), [than_number](int i){return i > than_number;});
    return search_result;
}



int main(){
    std::vector<int> numbers {12, 34, 45, 56, 78, 89, 90, 32, 54, 21};
    int b = 500;

    std::cout << findOddNumber(numbers) << '\n';
    std::cout << findDivisiableToThreeAndFive(numbers) << '\n';
    std::vector<int> find_numbers = findAllNumberGreaterThan(numbers, b);
    for(auto itr = find_numbers.begin(); itr != find_numbers.end(); ++itr){
        std::cout << *itr << '\n';
    }
    return 0;
}
