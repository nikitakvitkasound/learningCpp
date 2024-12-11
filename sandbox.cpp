#include <iostream>
#include <vector>

std::string& Test(std::vector<std::string>& words, size_t i){
    return words[i];
}

int main(){
    std::vector<std::string> greetings  { "hello", "there", ",", "Anakin", "!"};
    for (auto item : greetings){
        std::cout << item << ' ';
    }
    std::cout << '\n';

    std::string& rname { Test(greetings, 3) };
    rname = "Duku";

    for (auto item : greetings){
        std::cout << item << ' ';
    }
    
    return 0;
}
