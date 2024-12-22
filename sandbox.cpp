#include <iostream>
#include <string>
#include <vector>

// do class Farm (vector of Critters (names)):
    // initialize with reserved()
    // Add() to add new member of the vector
    // Roll() print vectors
class Critter
{
    friend std::string Peek(const Critter& critter){
        return critter.m_name;
    }
    friend std::ostream& operator<<(std::ostream& os, const Critter& critter){
        os << critter.m_name;
        return os;
    }
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

// check pushback() without const and without farm size

class Farm
{
private:
    std::vector<Critter> m_critters;
    // size_t m_size;
public:
    Farm(size_t farm_size = 0) // const std::string& name = "Ali G"
        : m_critters { farm_size } // name
    {
    }
    void Add(const Critter& critter_newcomer){
        m_critters.push_back(critter_newcomer);
    }
    void Roll(){
        for(Critter& critter_on_farm : m_critters){
            std::cout << critter_on_farm.GetName() << " on the farm!\n";
        }
    }
    size_t Size(){
        return m_critters.size();
    }
};



int main(){
    Critter critter_01;
    Critter critter_02 {"Gadget"};
    // std::cout << critter_01.GetName() << '\n';
    // std::cout << critter_02.GetName() << '\n';
    Farm farm;
    std::cout << "Farm size is " << farm.Size() << '\n';
    farm.Add(critter_01);
    farm.Add(critter_02);
    std::cout << farm.Size() << '\n';
    std::cout << Peek(critter_01) << '\n';
    farm.Roll();

    std::cout << critter_02;

    return 0;
}
