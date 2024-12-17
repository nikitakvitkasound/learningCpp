#include <iostream>
#include <vector>


std::string* GetItemFrom(std::vector<std::string>* const vector, size_t pos){
    return &((*vector)[pos]);
}


int main(){
    std::vector<std::string> names { "Jim", "Dwight", "Michael" };
    
    std::cout << GetItemFrom(&names, 1) << '\n';
    
    std::cout << *(GetItemFrom(&names, 1)) << '\n';
    
    *(GetItemFrom(&names, 1)) = "Pam";
    std::cout << names[1] << '\n';

    return 0;
}
