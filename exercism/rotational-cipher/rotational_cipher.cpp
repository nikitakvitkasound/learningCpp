#include "rotational_cipher.h"

namespace rotational_cipher {
    std::string rotate(const std::string &code, const int &rot){
        const int ABC_SIZE {26};
        char F_LETTER {'A'};
        std::string encode {code};

        for (char &ch : encode){
            if(isalpha(ch)){
                if(islower(ch)){
                    F_LETTER = 'a';
                }
                else{
                    F_LETTER = 'A';
                }
                ch = static_cast<char>(((ch - F_LETTER + rot) % ABC_SIZE) + F_LETTER);
            }
        }

        return encode;

        
// ---- Original code is below ---- //
        // const int ABC_SIZE {26};
        // const char FUP_LETTER {'A'};
        // const char LUP_LETTER {'Z'};
        // const char FLC_LETTER {'a'};

        // std::string encode { };
        // for (char ch : code){
        //     if(isalpha(ch)){
        //         if(ch <= LUP_LETTER){
        //             encode += static_cast<char>(((ch - FUP_LETTER + rot) % ABC_SIZE) + FUP_LETTER); 
        //         }
        //         else{
        //             encode += static_cast<char>(((ch - FLC_LETTER + rot) % ABC_SIZE) + FLC_LETTER);
        //         }
        //     }
        //     else{
        //         encode += ch;
        //     }
        // }

        // return encode;
    }
}