#include <iostream>
#include <vector>

int main(){
    const int FIND_NUM { 5 };
    std::vector<int> numbers {};
    int x { 2 };
    int n { 1 };
    int diver_series { 0 };
    
    while(numbers.size() < FIND_NUM){
        while(diver_series < x * x){
            diver_series = (n * (n + 1)) / 2;
            ++n;
        }
        
        if(diver_series == x * x){
            numbers.push_back(x * x);
        }
        
        ++x;
        n = 1;
        diver_series = 0;
    }

    for(auto i : numbers){
        std::cout << i << ' ';
    }

    std::cout << "\n\n";
    system("pause");
    return 0;
}
