#include "armstrong_numbers.h"
#include "cmath"

namespace armstrong_numbers {
    bool is_armstrong_number(int input){
        int cnt_digits = static_cast<int>(std::log10(input)) + 1;
        int armstrong { };
        for(int input_copy = input; input_copy != 0; input_copy /= 10){
            armstrong += static_cast<int>(std::pow(input_copy % 10, cnt_digits));
        }
        return input == armstrong;
    }
}
