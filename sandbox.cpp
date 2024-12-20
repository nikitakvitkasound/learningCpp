#include <iostream>
#include <cmath>

class Foo
{
private:
    std::string_view m_name { };
    int m_wins { };
    int m_loss { };
    static inline int s_Counter { 0 };
public:
    Foo(std::string_view name, int wins, int lose)
        : m_name { name }
        , m_wins { wins }
        , m_loss { lose }
    {
        ++s_Counter;
    }

    static int GetTotalInstances(){
        return s_Counter;
    }

    void PrintWinLossRatio() const{
        double ratio { static_cast<double>(m_wins) / static_cast<double>(m_loss) };
        ratio = std::round(ratio * 100) * 0.01;
        std::cout << m_name << ": " << m_wins << " wins, " << m_loss << " loss(es) or " << ratio << " WLR.\n";
    }

    void SetWins(int win){
        m_wins += win;
    }

    void SetLosses(int loss){
        m_loss += loss;
    }
};



int main(){
    Foo fighter_01 {"Jackson Sackson", 18, 7};
    fighter_01.SetLosses(2);
    fighter_01.SetWins(3);
    fighter_01.PrintWinLossRatio();
    
    Foo fighter_02 {"Mike Pyke", 29, 5};
    Foo fighter_03 {"Test", 12, 22};
    Foo fighter_04 {"Test", 12, 22};
    Foo fighter_05 {"Test", 12, 22};
    // fighter_02.SetLosses(2);
    fighter_02.PrintWinLossRatio();
    std::cout << Foo::GetTotalInstances();

}
