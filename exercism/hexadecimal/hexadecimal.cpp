#include "hexadecimal.h"

namespace hexadecimal {
    int convert(const std::string& str){
        int dec_number {0};
        int hex_base {16};
        int digit_count {0};
        int convert_char_number {48};
        int convert_char_letter {87};

        for(size_t i = str.size(); i-- > 0;){
            if(str[i] < '0' || str[i] > '9'){
                if(str[i] < 'a' || str[i] > 'f'){
                    return 0;
                }
                else{
                    dec_number += static_cast<int>(std::pow(hex_base, digit_count)) * (str[i] - convert_char_letter);
                    ++digit_count;
                }
            }
            else{
                dec_number += static_cast<int>(std::pow(hex_base, digit_count)) * (str[i] - convert_char_number);
                ++digit_count;
            }
        }
        return dec_number;
    }
}
