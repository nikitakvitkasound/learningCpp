// Exercise 1: Overload operator>> for Input
#include <iostream>

class Rectangle
{
    friend std::istream& operator>>(std::istream& is, Rectangle& rectangle){
        std::cout << "Define Width: ";
        is >> rectangle.m_width;
        std::cout << "Define Height: ";
        is >> rectangle.m_height;
        return is;
    }
private:
    int m_width {};
    int m_height {};
public:
    Rectangle(int width = 1, int height = 1)
        : m_width { width }
        , m_height { height }
        {
        }
    int Area() const{
        return m_width * m_height;
    }
};

int main(){
    Rectangle a;
    std::cin >> a;
    std::cout << "The area is " << a.Area() << '\n';

    return 0;
}
