// create increment()
// create decrement()

#include <iostream>

class Clock{
private:
    int m_hour {};
    int m_minute {};
    int m_second {};
public:
    Clock(int hour = 0, int minute = 0, int second = 0)
        : m_hour { hour }
        , m_minute { minute }
        , m_second { second }
    {
    }

    void Increment(){
        m_second++;
        m_minute += m_second / 60;
        m_hour += m_minute / 60;

        m_second %= 60;
        m_minute %= 60;
        m_hour %= 24;
    }

    void Decrement(){
        m_second--;
        if(m_second < 0){
            m_second += 60;
            m_minute--;
        }
        if(m_minute < 0){
            m_minute += 60;
            m_hour--;
        }
        if(m_hour < 0)
        {
            m_hour += 24;
        }
    }

    void Display(){
        std::cout << (m_hour % 12 ? m_hour % 12 : m_hour) << ":";
        std::cout << (m_minute < 10 ? "0": "") << m_minute << ":";
        std::cout << (m_second < 10 ? "0": "") << m_second << ' ';
        std::cout << (m_hour < 12 ? "AM" : "PM") << '\n';
    }
};


int main(){
    Clock pest {2, 0, 3};
    int cnt { 0 };
    while(cnt < 3){
        pest.Increment();
        pest.Display();
        ++cnt;
    }

    std::cout << '\n';
    cnt = 0;
    while(cnt < 7){
        pest.Decrement();
        pest.Display();
        ++cnt;
    }
    

    std::cout << '\n';
    system("pause");
    return 0;
}
