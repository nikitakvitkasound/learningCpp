#include <iostream>
#include <map>

int main(){
    // working through video: https://youtu.be/6OoSgY6NVVk?si=nmjKUkhbTPZXE15G

    std::map<std::string, int> nums;
    nums["one"] = 1;
    nums["two"] = 2;
    nums["three"] = 3;
    nums["four"] = 4;
    nums["five"] = 5;
    nums["six"] = 6;

    for(auto& i : nums){
        std::cout << i.first << " = " << i.second << '\n';
    }

    return 0;
}
