#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

std::string encode(std::string code);

int main(){
    std::string code {"O M G"};

    std::cout << encode(code);
    return 0;
}

std::string encode(std::string code){
    code.erase(std::remove(code.begin(), code.end(), ' '), code.end());
    std::transform(code.begin(), code.end(), code.begin(), [] (unsigned char c) { return std::tolower(c); });

    std::unordered_map<char, char> cipher = {
        {'a', 'z'},
        {'b', 'y'},
        {'c', 'x'},
        {'d', 'w'},
        {'e', 'v'},
        {'f', 'u'},
        {'g', 't'},
        {'h', 's'},
        {'i', 'r'},
        {'j', 'q'},
        {'k', 'p'},
        {'l', 'o'},
        {'m', 'n'},
        {'n', 'm'},
        {'o', 'l'},
        {'p', 'k'},
        {'q', 'j'},
        {'r', 'i'},
        {'s', 'h'},
        {'t', 'g'},
        {'u', 'f'},
        {'v', 'e'},
        {'w', 'd'},
        {'x', 'c'},
        {'y', 'b'},
        {'z', 'a'},
    };

    std::string encode { };
    int ws_counter { 0 };

    for (char ch : code){
        if (ws_counter == 5){
            encode += ' ';
            ws_counter = 0;
        }
        if(cipher.count(ch)){
            encode += cipher[ch];
            ++ws_counter;
        }
        else{
            encode += ch;
            ++ws_counter;
        }
    }
    return encode;
}
