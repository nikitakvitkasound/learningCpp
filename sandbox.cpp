// Working through CppCon 2018: Jonathan Boccara “105 STL Algorithms in Less Than an Hour” https://www.youtube.com/watch?v=2olsGf6JIkU

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
// #include <utility>

int main(){
    std::vector<int> nums { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    // std::sort(nums.begin(), nums.end(), std::greater{});
    // std::stable_partition(nums.begin(), nums.end(), [](int i){return i % 2 == 0;});
    // for(int item : nums){
    //     std::cout << item << ' ';
    // }
    // std::vector<int> nums_2 { 2, 4, 5, 6, 8, 9, 10, 12, 28 };
    // std::vector<int> result { };
    // std::set_symmetric_difference(nums.begin(), nums.end(), nums_2.begin(), nums_2.end(), std::back_inserter(result));
    // for (int item : result){
    //     std::cout << item << ' ';
    // }

    std::iota(nums.begin(), nums.end(), 42);
    nums.erase(std::remove(nums.begin(), nums.end(), 47), nums.end());
    for(int item : nums){
        std::cout << item << ' ';
    }
    std::vector<int> even { };
    std::vector<int> odd { };
    std::partition_copy(nums.begin(), nums.end(), std::back_inserter(even), std::back_inserter(odd), [](int i){return i % 2 == 0;});
    for (int item : even){
        std::cout << item << ' ';
    }
    std::cout << "|";
    for (int item : odd){
        std::cout << item << ' ';
    }
    // int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int true_arr[5] = {0};
    // int false_arr[5] = {0};
 
    // std::partition_copy(std::begin(arr), std::end(arr), std::begin(true_arr), std::begin(false_arr), [](int i) { return 4 < i; });

    std::cout << '\n';
}
