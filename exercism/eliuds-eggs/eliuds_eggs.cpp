#include "eliuds_eggs.h"

namespace chicken_coop {
    int positions_to_quantity(int pos){
        int base {2};
        int eggs { };
        while(pos != 0){
            // if(pos % base != 0){
            //     ++eggs;
            // }
            eggs += pos % base; // 'if' above is original iteration
            pos = pos / base;
        }
        return eggs;
    }
}
