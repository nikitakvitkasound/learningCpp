#include <iostream>
#include <cmath>

class Foo
{
private:
    std::string_view m_name { };
    int m_wins { };
    int m_loss { };

    double CalcualteRatio(const int& wins, const int& loss){
        // return std::round(static_cast<double>(wins) / static_cast<double>(loss));
        return std::round((static_cast<double>(wins) / static_cast<double>(loss)) * 100) * 0.01;
    }

public:
    Foo(std::string_view name, int wins, int lose)
        : m_name { name }
        , m_wins { wins }
        , m_loss { lose }
    {
    }
    void PrintWinLossRatio(){
        std::cout << m_name << ": " << m_wins << " wins, " << m_loss << " loss(es) or " << CalcualteRatio(m_wins, m_loss) << " WLR.\n";
    }
    void SetWins(int win){
        m_wins += win;
    }
    void SetLosses(int loss){
        m_loss += loss;
    }
};


int main(){
    Foo fighter {"Jackson Sackson", 18, 7};
    // fighter.PrintWinLossRatio();
    // fighter.SetLosses(2);
    // fighter.SetWins(3);
    fighter.PrintWinLossRatio();

}
