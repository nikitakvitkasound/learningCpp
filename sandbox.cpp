#include <iostream>
#include <vector>

bool test(bool a, bool b, bool c){
    return a && b && !c;
}

int main(){
    if(test(true, true, true)){
        std::cout << "Hello!";
    }
    else{
        std::cout << "bye";
    }
    return 0;
}
