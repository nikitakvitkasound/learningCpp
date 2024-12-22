#include <iostream>
#include <string>
#include <algorithm>

class Tekken
{
    friend void Peek_01(const Tekken& chr){
        std::cout << "Psss.. my name is " << chr.m_name << "!\n";
    }
    friend void Peek_02(const Tekken& chr);
    friend void Peek_03(const Tekken& chr);
    friend std::ostream& operator<<(std::ostream& os, const Tekken& chr){
        os << "C'mon, man! it's not funny I'm " << chr.m_name << "...\n";
        return os;
    }
private:
    std::string m_name {};
public:
    Tekken(const std::string& name = "Mokujin")
        : m_name {name}
    {
    }
    void GetName(){
        std::cout << "My name is " << m_name << "!\n";
    }
};

void Peek_02(const Tekken& chr){
    std::cout << "Can you hear me?! My name is " << chr.m_name << "!\n";
}
void Peek_03(const Tekken& chr);

int main(){
    Tekken chr;
    chr.GetName();
    Peek_01(chr);
    Peek_02(chr);
    Peek_03(chr);
    std::cout << chr;

    return 0;
}

void Peek_03(const Tekken& chr){
    std::string upper {chr.m_name};
    std::transform(upper.begin(), upper.end(), upper.begin(), [](unsigned char c){ return std::toupper(c);});
    std::cout << "ARE YOU DEAF?! I AM " << upper << "!!\n";
}
