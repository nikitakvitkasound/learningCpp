#include <iostream>

bool needs_license(std::string kind){
    return kind == "car" || kind == "truck";
}

std::string choose_vehicle(std::string option1, std::string option2) {
    if(option1 > option2){
        return option2 + " is clearly the better choice.";
    }
    else{
        return option1 + " is clearly the better choice.";
    }
}

int main(){
    std::string vehicle {"bike"};
    std::cout << needs_license(vehicle);
    std::string opt_1 = "Audi";
    std::string opt_2 = "Toyota";
    std::cout << choose_vehicle(opt_1, opt_2);
    
    return 0;
}
