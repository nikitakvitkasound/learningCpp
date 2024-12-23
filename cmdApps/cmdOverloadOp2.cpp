// Exercise 2: Overload += and -= for a Custom Class
#include <iostream>

class Counter
{
    friend Counter& operator+=(Counter& that, int increment){
        that.m_value += increment;
        if(that.m_value < 0){ 
            that.m_value = 0; 
        }
        return that;
    }
    friend Counter& operator-=(Counter& that, int decrement){
        that.m_value -= decrement;
        if(that.m_value < 0){ 
            that.m_value = 0; 
        }
        return that;
    }
private:
    int m_value {};
public:
    Counter (int value = 0)
        : m_value { value }
    {
    }
    int ShowValue() const{
        return m_value;
    }
};

int main(){
    Counter a {22};
    a += 4;
    a -= 22; 
    a -= 6;
    std::cout << a.ShowValue();

    return 0;
}
