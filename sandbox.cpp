    #include <iostream>
    // #include <string>
    // class Bot
    // {
    // private:
    //     std::string* m_name {};
    // public:
    //     Bot(const std::string& name = "Jack")
    //         : m_name { new std::string{name} }
    //         {
    //         }

    //     Bot(const Bot& b){
    //         delete m_name;
    //         m_name = new std::string{*b.m_name};
    //     }
        
    //     Bot& operator=(const Bot& b){
    //         if (this != &b){
    //             delete m_name;
    //             m_name = new std::string{*b.m_name};
    //         }
    //         return *this;
    //     }

    //     ~Bot(){
    //         // std::cout << "destroy!\n";
    //         delete m_name;
    //     }

    //     void PrintName(){
    //         std::cout << *m_name << '\n';
    //     }
    //     void PrintNameAddress(){
    //         std::cout << m_name << '\n';
    //     }
    // };

    // int main(){
    //     Bot robot_01 { "Jack-9" };
    //     // Bot robot_02 { robot_01 };
    //     Bot robot { "Jack-8" };
    //     robot = robot_01;
    //     robot_01.PrintNameAddress();
    //     robot.PrintNameAddress();
    //     // robot_02.PrintNameAddress();
    //     robot_01.PrintName();
    //     robot.PrintName();
    //     // robot_02.PrintName();

    // }
int* GetAddress(int* ptr){
    return ptr;
}

int main(){
    int a { 2 };
    std::cout << a << '\n';
    int* ptr { &a };
    std::cout << *ptr << " " << ptr << '\n';

    std::cout << GetAddress(ptr);
}
