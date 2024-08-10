#include <iostream>

bool is_leap_year(int year){
    if (year % 100 == 0){
        if(year % 400 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int y {2100};
    std::cout << is_leap_year(y);
    
    return 0;
}
