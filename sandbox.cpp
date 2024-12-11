#include <iostream>
#include <vector>

std::string& badReference(std::string& phrase){
    std::string local { "hello all!" };
    phrase = local + phrase;
    return phrase;
}

int main(){
    std::string sting {"our next song is Seven Days!"};
    std::string& test {badReference(sting)};
    std::cout << test << '\n';

    test = "help!";
    std::cout << sting << '\n';

    return 0;
}
