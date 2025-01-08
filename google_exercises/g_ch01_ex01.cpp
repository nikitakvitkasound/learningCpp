#include <iostream>
#include <iomanip>

int main(){
    const int FIELD_WIDTH { 17 };
    std::string message { "Hello World!" };
    
    for(int i = 0; i < 6; ++i){
        for(int j = 0; j < 4; ++j){
            std::cout << std::left << std::setw(FIELD_WIDTH) << message;
        }
        std::cout << '\n';
    }

    std::cout << '\n';
    system("pause");
    return 0;
}
