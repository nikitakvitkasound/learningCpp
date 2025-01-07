#include <iostream>
#include <string>
#include <array>
#include <algorithm>

class Animal
{
protected:
    std::string m_name {};

    Animal(const std::string& name)
        : m_name { name }
    {
    }

    // Animal(const Animal&) = delete;
    // Animal& operator=(const Animal&) = delete;
    virtual ~Animal() = default;

public:
    std::string_view GetName() const { return m_name; }
    virtual std::string_view GetVoice() const { return "???"; } 
};

class Cat : public Animal
{
public:
    Cat(const std::string& name)
        : Animal { name }
    {
    }

    std::string_view GetName() const { return m_name; }
    virtual std::string_view GetVoice() const { return "meow.."; }
};

class Dog : public Animal
{
public:
    Dog(const std::string& name)
        : Animal { name }
    {
    }

    std::string_view GetName() const { return m_name; }
    virtual std::string_view GetVoice() const { return "woof.."; }
};

class Mouse : public Animal
{
public:
    Mouse(const std::string& name)
        : Animal { name }
    {
    }

    std::string_view GetName() const { return m_name; }
    virtual std::string_view GetVoice() const { return "pipip.."; }
};

int main(){
    Cat tom { "Tom" };
    Cat poky { "Poky" };
    Cat gadget { "Gadget" };

    Dog burb { "Burd" };
    Dog rex { "Rex" };
    Dog jack { "Jack" };

    Mouse jerry { "Jerry" };
    Mouse flip { "Flip" };
    Mouse jingles { "Jingles" };

    std::array<const Animal*, 9> animals {&tom, &poky, &gadget, &burb, &rex, &jack, &jerry, &flip, &jingles};

    std::cout << "we have many animals here! there are: \n";
    for (const auto& i : animals){
        std::cout << i->GetName() << " says " << i->GetVoice() << '\n';
    }

    return 0;
}
