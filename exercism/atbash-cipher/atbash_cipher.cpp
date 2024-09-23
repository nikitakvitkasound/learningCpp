#include "atbash_cipher.h"

namespace atbash_cipher {
    const int LETTER_FLIP = 96 * 2 + 27;
    
    std::string encode(std::string code){
        std::string encoded;
        int ws_counter { 0 };
        
        for (char c : code){
            if(isalpha(c)){
                if(ws_counter % 5 == 0 && ws_counter != 0){
                    encoded += ' ';
                }
                encoded += static_cast<char>(LETTER_FLIP - tolower(c));
                ++ws_counter;
            }
            else if(isdigit(c)){
                if(ws_counter % 5 == 0 && ws_counter != 0){
                    encoded += ' ';
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
                decoded += static_cast<char>(LETTER_FLIP - tolower(c));
            }
            else if(isdigit(c)){
                decoded += c;
            }
        }
    
        return decoded;
    }


// ---- my original code is below; above is updated community solution ---- //

// namespace atbash_cipher {
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
//             else{
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
//             else{
//                 decode += ch;
//             }
//         }
//         return decode;
//     }
}  // namespace atbash_cipher
