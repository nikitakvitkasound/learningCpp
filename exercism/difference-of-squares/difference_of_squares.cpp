#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum (int range){
        int square_of_sum { };
        for (int i = 1; i <= range; ++i){
            square_of_sum += i;
        }
        return square_of_sum * square_of_sum;
    }

    int sum_of_squares(int range){
        int sum_of_squares { };
        for (int i = 1; i <= range; ++i){
            sum_of_squares += i * i;
        }
        return sum_of_squares;
    }
    
    int difference (int range){
        return square_of_sum(range) - sum_of_squares(range);
    }
}
