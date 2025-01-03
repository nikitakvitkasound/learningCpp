#include <iostream>
#include <string>

class Person
{
public:
    std::string m_name {};
    int m_age {};

    Person(const std::string& name = "", int age = 0)
        : m_name { name }
        , m_age { age }
    {
    }

    ~Person()
    {
        std::cout << m_name << " is destroed!\n";
    }

    const std::string& GetName() const
    {
        return m_name;
    }

    int GetAge() const 
    {
        return m_age;
    }
};

class BaseballPlayer : public Person
{
public:
    double m_ba {};
    int m_hr {};

    BaseballPlayer(double batting_average = 0.0, int home_runs = 0)
        : m_ba { batting_average }
        , m_hr { home_runs }
    {
    }
};

class Pitcher : public BaseballPlayer
{
public:
    double m_war {};

    ~Pitcher()
    {
        std::cout << "Check! \n";
    }
    
    Pitcher(double war = 0.0)
        : m_war { war }
    {
    }
};


int main(){
    Person p {"Bob", 12};
    Pitcher p_01 { 0.24 };
    std::cout << p_01.m_age << '\n';
    p_01.m_name = "Chapman";
    std::cout << p_01.GetName() << '\n';

    return 0;
}
