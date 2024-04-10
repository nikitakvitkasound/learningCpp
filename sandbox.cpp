#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    // std::vector<std::string> inventory(3);
    // inventory[0] = "sword";
    // inventory[1] = "arrows";
    // inventory[2] = "bow";
    // for(auto iter = inventory.begin(); iter < inventory.end(); ++iter){
    //     std::cout << *iter << '\n';
    // }
    // std::vector<std::string>::iterator item = inventory.begin();
    // std::string phrase = "shield and sword are best friends";
    // if(!(item->empty())){
    //     if(phrase.find(*item) != std::string::npos){
    //         inventory.insert(++item, "crossbow");
    //         inventory.erase(inventory.end() - 1);
    //     }
    // }
    // std::cout << "\n- - - update inventory - - -\n\n";
    // for(auto iter = inventory.begin(); iter < inventory.end(); ++iter){
    //     std::cout << *iter << '\n';
    // }
    // system("pause");
    // return 0;
    std::vector<int> numbers = {1, 23, 435, 21, 12, 3, 8, 10, 15, 44, 2};
    sort(numbers.begin(), numbers.begin() + 7);
    for (std::vector<int>::const_iterator iter = numbers.begin(); iter != numbers.end(); ++iter){
        std::cout << *iter << '\n';
    }
    sort(numbers.begin(), numbers.end());
    for (std::vector<int>::const_iterator iter = numbers.begin(); iter != numbers.end(); ++iter){
        std::cout << *iter << '\n';
    }
    return 0;
}
