#include <iostream>
#include <vector>

std::vector<int> runningSum(std::vector<int>& nums){
    for(std::vector<int>::size_type i = 1; i < nums.size(); i++){
        nums[i] += nums[i-1];
    }
    return nums;
}

void printVector(std::vector<int>& v){
    std::cout << "[";
    for (std::vector<int>::size_type i = 0; i < v.size(); ++i){
        std::cout << " " << v[i];
    }
    std::cout << " ]";
}

int main(){
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> sum = runningSum(nums);
    printVector(sum);

    return 0;
}
