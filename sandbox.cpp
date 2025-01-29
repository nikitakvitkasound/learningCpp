#include <iostream>

class Point
{
    int m_x {};
    int m_y {};

public:
    Point();
    Point(int x, int y);
    int getX() const;
    int getY() const;
};

Point::Point()
    : m_x { 0 }
    , m_y { 0 }
{
}

Point::Point(int x, int y)
    : m_x { x }
    , m_y { y }
{
}

int Point::getX() const
{
    return m_x;
}

int Point::getY() const
{
    return m_y;
}

int main(){
    Point test_01;
    Point test_02 {1, 2};

    std::cout << "test 01: (" << test_01.getX() << ", " << test_01.getY() << ").\n";
    std::cout << "test 02: (" << test_02.getX() << ", " << test_02.getY() << ").\n"; 

    return 0;
}
