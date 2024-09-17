#include "luhn.h"

namespace luhn {
    bool valid(std::string str){
        int sum {0};
        int digit_count {0};
        int factor {2};
        
        for(size_t i = str.size(); i-- > 0;){
            if(str[i] == ' '){
                continue;
            }
            if(str[i] < '0' || '9' < str[i]){
                return false;
            }
            ++digit_count;
            factor = 3 - factor;
            int digit = (str[i] - '0') * factor;
            if(digit > 9){
                digit -= 9;
            }
            sum += digit;
        }
        
        return digit_count > 1 && sum % 10 == 0;
    }


// ----- My original try is below ----- //
    // bool valid(std::string input){
    //     input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
    
    //     if(input.size() < 2){
    //         return false;
    //     }

    //     std::reverse(input.begin(), input.end());

    //     int sum { };
    //     int second_digit { };
    //     std::string to_digit { };

    //     for(size_t i = 0; i < input.size(); ++i){
    //         if (!std::isdigit(input[i])){
    //             return false;
    //         }
    //         if(i % 2 == 0){
    //             to_digit = input[i];
    //             sum += std::stoi(to_digit);
    //         }
    //         else{
    //             to_digit = input[i];
    //             second_digit = std::stoi(to_digit) * 2;
    //             if (second_digit > 9){
    //                 second_digit -= 9;
    //             }
    //             sum += second_digit;
    //         }
    //     }
        
    //     if (sum % 10 != 0){
    //         return false;
    //     }
        
    //     return true;
    // }
}
