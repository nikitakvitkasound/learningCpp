#include <iostream>
#include <string>
// #include <algorithm>
// #include <unordered_map>

// namespace atbash_cipher{
//         const std::unordered_map<char, char> cipher = {
//             {'a', 'z'},
//             {'b', 'y'},
//             {'c', 'x'},
//             {'d', 'w'},
//             {'e', 'v'},
//             {'f', 'u'},
//             {'g', 't'},
//             {'h', 's'},
//             {'i', 'r'},
//             {'j', 'q'},
//             {'k', 'p'},
//             {'l', 'o'},
//             {'m', 'n'},
//             {'n', 'm'},
//             {'o', 'l'},
//             {'p', 'k'},
//             {'q', 'j'},
//             {'r', 'i'},
//             {'s', 'h'},
//             {'t', 'g'},
//             {'u', 'f'},
//             {'v', 'e'},
//             {'w', 'd'},
//             {'x', 'c'},
//             {'y', 'b'},
//             {'z', 'a'},
//         };

//     std::string encode(std::string code){
//         code.erase(std::remove(code.begin(), code.end(), ' '), code.end());
//         code.erase(std::remove(code.begin(), code.end(), ','), code.end());
//         code.erase(std::remove(code.begin(), code.end(), '.'), code.end());
//         std::transform(code.begin(), code.end(), code.begin(), [] (unsigned char c) { return std::tolower(c); });

//         std::string encode { };
//         int ws_counter { 0 };

//         for (char ch : code){
//             if (ws_counter == 5){
//                 encode += ' ';
//                 ws_counter = 0;
//             }
//             if(cipher.count(ch)){
//                 encode += cipher.at(ch);
//                 ++ws_counter;
//             }
//             else if(ch != ',' && ch != '.' && ch != ' '){
//                 encode += ch;
//                 ++ws_counter;
//             }
//         }
//         return encode;
//     }

//     std::string decode(std::string code){
//         code.erase(std::remove(code.begin(), code.end(), ' '), code.end());
//         std::transform(code.begin(), code.end(), code.begin(), [] (unsigned char c) { return std::tolower(c); });

//         std::string decode { };

//         for (char ch : code){
//             if(cipher.count(ch)){
//                 decode += cipher.at(ch);
//             }
//             else if(ch != ',' && ch != '.' && ch != ' '){
//                 decode += ch;
//             }
//         }
//         return decode;
//     }
// }

std::string encode(std::string code){
    std::string encoded;
    int ws_counter { 0 };
    
    for (char c : code){
        if(isalpha(c)){
            if(ws_counter % 5 == 0 && ws_counter != 0){
                encoded += ' ';
            }
            encoded += static_cast<char>(96 * 2 + 27 - tolower(c));
            ++ws_counter;
        }
        else if(isdigit(c)){
            if(ws_counter++ % 5 == 0 && ws_counter != 0){
                encoded += c;
            }
            encoded += c;
            ++ws_counter;
        }
    }

    return encoded;
}

std::string decode(std::string code){
    std::string decoded;
    
    for (char c : code){
        if(isalpha(c)){
            decoded += static_cast<char>(96 * 2 + 27 - tolower(c));
        }
        else if(isdigit(c)){
            decoded += c;
        }
    }

    return decoded;
}

int main(){
    // std::string code {"The quick brown fox jumps over the lazy dog."};
    std::string code {"svool ,dlio w!r'n 122"};
    // todo check for letter
    // update counter
    // todo check for digit
    // update counter
    // return encoded

    // std::cout << encode(code) << '\n';
    std::cout << decode(code) << '\n';

    std::cout << '\n';

    return 0;
}
