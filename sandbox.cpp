#include <iostream>
#include <fstream>

class Point
{
    const int m_x {};
    const int m_y {};

public:
    Point();
    Point(int x, int y);
    int getX() const;
    int getY() const;
    void print() const;
};

Point::Point()
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

void Point::print() const
{
    std::cout << "test 02: (" << m_x << ", " << m_y << ").\n"; 
}

int main(){
    Point test_01;
    Point test_02 {1, 2};
    const Point test_03 {4, 12};


    std::cout << "test 01: (" << test_01.getX() << ", " << test_01.getY() << ").\n";
    std::cout << "test 02: (" << test_02.getX() << ", " << test_02.getY() << ").\n";
    test_03.print();

    // WORKING WITH FILES
    // std::string filename{};
    // std::ifstream fin(filename);
    // std::string first;
    // std::string last;
    // int id;
    // float avg;

    // while(fin >> first){
    //     fin >> last >> id >> avg;

    //     // do something with there variables, i.e.
    //     // addStudent(Student(first, last,id, avg));
    // }

    return 0;
}
