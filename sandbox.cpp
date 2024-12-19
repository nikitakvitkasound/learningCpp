#include <iostream>
#include <cmath>

class Foo
{
private:
    std::string_view m_name { };
    int m_wins { };
    int m_loss { };

public:
    Foo(std::string_view name, int wins, int lose)
        : m_name { name }
        , m_wins { wins }
        , m_loss { lose }
    {
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
    
    const Foo fighter_02 {"Mike Pyke", 29, 5};
    // fighter_02.SetLosses(2);
    fighter_02.PrintWinLossRatio();

}
