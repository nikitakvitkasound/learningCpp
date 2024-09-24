#include <iostream>
#include <string>

std::string rotate(const std::string &code, const int &rot);

int main(){
    std::string code {"The quick brown fox jumps over the lazy dog."};
    int rot {13};

    std::cout << rotate(code, rot);
    // int x = ('o' - 97 + 5) % 26;
    // std::cout << x << '\n';
    // std::cout << static_cast<char>(x + 97);
    std::cout << ((84 - 65 + 13) % 26) + 65;

    return 0;
}

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
}
