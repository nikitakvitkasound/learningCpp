#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>
#include <ctime>
// #include <utility>

int main(){
    std::vector<int> nums { 1, 6, 3, 4, 5};
    auto itr = nums.begin();
    std::cout << ++*itr;
}
