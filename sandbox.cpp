#include <iostream>
#include <vector>


int main(){
    std::vector<int> nums{0, 1, 2, 3, 4, 5, 6};
    //auto item = nums.begin();
    auto nxt = std::next(nums.end(), -3);
    //std::cout << *item << '\n';
    std::cout << *nxt << '\n';

    return 0;
}
