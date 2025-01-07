#include <iostream>

class Base
{
public:
    int m_value {};
    Base(int value = 0)
        : m_value { value }
    {
    }
    // virtual ~Base() = default;

    /*virtual*/ std::string_view GetName() const { return "Base"; }
    /*virtual*/ int GetValue() const { return m_value; }
};

class Derived : public Base
{
public:
    Derived(int value = 0)
        : Base { value }
    {
    }

    std::string_view GetName() const { return "Derived"; }
    int GetValue() const { return m_value * 2; }
};

int main(){
    Derived derived { 12 };
    Base& ref_derived { derived };
    Base* ptr_derived { &derived };

    std::cout << "This is " << derived.GetName() << " and it has value of " << derived.GetValue() << '\n';
    std::cout << "This is " << ref_derived.GetName() << " and it has value of " << ref_derived.GetValue() << '\n';
    std::cout << "This is " << ptr_derived->GetName() << " and it has value of " << ptr_derived->GetValue() << '\n';

    return 0;
}
