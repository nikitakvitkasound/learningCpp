#include <iostream>
#include <vector>
class Log{
private:
    static inline int s_total { 0 };
    int m_a{};
    int m_b{};
public:
    Log(int a = 4, int b = 2)
        : m_a {a}
        , m_b {b}
    {    
        ++s_total;  
    }
    void static GetTotalInstances(){
        std::cout << "This is static: " << s_total << '\n';
    }
};


int main(){
    Log test_01;
    Log test_02;
    std::vector<Log> logger (8);
    Log::GetTotalInstances();
}
