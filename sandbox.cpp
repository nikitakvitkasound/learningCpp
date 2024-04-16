#include <iostream>
#include <vector>

void PrintVector(std::vector<int>& nums);
int GetNumberFromVector(std::vector<int>& nums, size_t i);
int& GetNumberFromVectorRef(std::vector<int>& nums, size_t i);

int main(){
    std::vector<int> numbers (10, 0);
    size_t pos = 1;
    int y = GetNumberFromVector(numbers, pos);
    int& r_y = y;
    r_y += 1;
    pos = 2;
    int& x = GetNumberFromVectorRef(numbers, pos);
    x = 2;
    PrintVector(numbers);

    return 0;
}

void PrintVector(std::vector<int>& nums){
    for(std::vector<int>::iterator iter = nums.begin(); iter != nums.end(); ++iter){
        std::cout << *iter << '\n';
    }
}

int GetNumberFromVector(std::vector<int>& nums, size_t i){
    return nums[i];
}

int& GetNumberFromVectorRef(std::vector<int>& nums, size_t i){
    return nums[i];
}
