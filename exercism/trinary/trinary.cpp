#include "trinary.h"

namespace trinary {
    int to_decimal(const std::string& trinary) {
        int num_dec = 0;
        for (char c : trinary) {
            if (c > '2' || c < '0'){
                return 0;
            }
            num_dec = 3 * num_dec + (c - '0');
        }
        return num_dec;
    }
}  // I'm not going to lie, stole solution from https://exercism.org/tracks/cpp/exercises/trinary/solutions/RedArtist
