#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> inventory(3);
    inventory[0] = "sword";
    inventory[1] = "arrows";
    inventory[2] = "bow";
    for(auto iter = inventory.begin(); iter < inventory.end(); ++iter){
        std::cout << *iter << '\n';
    }

    system("pause");
    return 0;
}
