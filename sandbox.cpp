#include <iostream>

class Base
{
public:
    int m_test {};

    Base(int test = 0)
        : m_test { test }
    {
        std::cout << "Base is created. Value is " << m_test << '\n';
    }

    virtual ~Base() = default;

    void virtual GetTest() const
    {
        std::cout << m_test << " is test number of Base class.\n";
    }
};

class Derived : public Base
{
public:
    Derived (int test = 0)
        : Base { test }
    {
    }

    void virtual GetTest() const
    {
        std::cout << m_test << " is test number of Derived class.\n";
        std::cout << "And . . . ";
        Base::GetTest();
    }

};


int main(){
    std::cout << "Hello, World!\n";
    Derived test { 12 };

    test.GetTest();
    return 0;
}
