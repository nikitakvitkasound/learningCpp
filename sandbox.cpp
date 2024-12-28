#include <iostream>

class Bot{
private:
    std::string m_name { };
    int m_speed { };
public:
    Bot(const std::string& name, const int& speed)
        : m_name { name }
        , m_speed { speed }
    {
    }

    Bot(const Bot& copy_of)
        : m_name { copy_of.m_name + "_copy" }
        , m_speed { copy_of.m_speed }
    {
    }
    
    Bot& operator= (const Bot& copy_of){
        m_name = copy_of.m_name + "_copy";
        m_speed = copy_of.m_speed;
        return *this; 
    }

    std::string GetName() const
    {
        return m_name;
    }
};

int main(){

    Bot test {"Jack-9", 2};
    Bot test_02 { test };
    std::cout << test_02.GetName() << '\n';
    Bot test_03 { "Steve", 5};
    test_02 = test_03;
    std::cout << test_02.GetName();


    return 0;
}
