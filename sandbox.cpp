#include <iostream>
#include <string>
#include <cmath>

int convert(const std::string& str);

int main(){
    std::string hex {"1"};

    std::cout << convert(hex);
    return 0;
}

// 87 is number to trancuate to

int convert(const std::string& str){
    // if(str[0] != '0' || str[1] != 'x'){
    //     return 0;
    // }

    // std::string str_lower { };
    // for(char ch : str){
    //     str_lower += static_cast<char>(std::tolower(ch));
    // }

    int dec_number {0};
    int hex_sys {16};
    int digit_count {0};
    int convert_char_number {48};
    int convert_char_letter {87};

    for(size_t i = str.size(); i-- > 0;){
        if(str[i] < '0' || str[i] > '9'){
            if(str[i] < 'a' || str[i] > 'f'){
                return 0;
            }
            else{
                dec_number += static_cast<int>(std::pow(hex_sys, digit_count)) * (str[i] - convert_char_letter);
                ++digit_count;
            }
        }
        else{
            dec_number += static_cast<int>(std::pow(hex_sys, digit_count)) * (str[i] - convert_char_number);
            ++digit_count;
        }
    }

    return dec_number;
}
