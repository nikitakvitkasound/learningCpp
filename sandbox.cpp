#include <iostream>

class Bot{
private:
    std::string m_name { };
    int m_speed { };
public:
    Bot(const std::string& name, const int& speed)
        : m_name { name } //{ new std::string {name} }
        , m_speed { speed }
    {
    }

    // Bot(const Bot& copy_of)
    // {
    //     delete m_name;
    //     m_name = new std::string {*copy_of.m_name};
    //     m_speed = copy_of.m_speed;
    // }

    // ~Bot()
    // {
    //     delete m_name;
    // }
    // void Print() const{
    //     std::cout << m_name << m_speed
    // }
};

int main(){

    Bot test {"Jack-9", 2};

    return 0;
}
