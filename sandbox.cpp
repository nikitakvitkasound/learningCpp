#include <iostream>
#include <string>

// do class Critter:
    // accept name
    // getname (to print);
// do class Farm (vector of Critters (names)):
    // initialize with reserved()
    // Add() to add new member of the vector
    // Roll() print vectors
class Critter
{
private:
    std::string m_name;
public:
    Critter(const std::string& name = "I don't know my name:(")
        : m_name { name }
    {
    }
    std::string GetName() const{
        return m_name;
    }
};



int main(){
    Critter critter_01;
    Critter critter_02 {"Gadget"};
    std::cout << critter_01.GetName() << '\n';
    std::cout << critter_02.GetName() << '\n';

    return 0;
}
