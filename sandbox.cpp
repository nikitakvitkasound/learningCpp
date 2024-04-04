#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass(int value) : m_value(value) {}

    // Getter method
    int getValue() const {
        return m_value;
    }

private:
    int m_value;
};

// Function taking a const reference to MyClass object
void printValue(const MyClass& obj) {
    std::cout << "Value: " << obj.getValue() << std::endl;
}

int main() {
    MyClass obj(42);
    
    // Pass by reference
    printValue(obj);

    return 0;
}
