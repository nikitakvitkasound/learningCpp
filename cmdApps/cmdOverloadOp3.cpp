// Exercise 3: Overload operator* for Scalar Multiplication
#include <iostream>

class Vector2D
{
    friend std::ostream& operator<< (std::ostream& os, const Vector2D& vec){
        os << "(" << vec.m_x << ", " << vec.m_y << ")\n";
        return os;
    }
    friend Vector2D operator* (const Vector2D& vec, const int& scalar){
        return {vec.m_x * scalar, vec.m_y * scalar};
    }
    friend int operator* (const Vector2D& vec_dot_01, const Vector2D& vec_dot_02){
        return (vec_dot_01.m_x * vec_dot_02.m_x) + (vec_dot_01.m_y * vec_dot_02.m_y);
    }
private:
    int m_x {};
    int m_y {};
public:
    Vector2D (int x = 0, int y = 0)
        : m_x { x }
        , m_y { y }
    {
    }
};


int main(){
    Vector2D v1 {3, 4};
    Vector2D v2 {2, 5};

    Vector2D v3 = v1 * 2;
    std::cout << v1;
    std::cout << v3;

    std::cout << "Dot product: " << v1 * v2 << '\n';

    return 0;
}
