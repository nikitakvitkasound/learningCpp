#include <iostream>
#include <string>

const int MIN_RANK { 10 };
const int MAX_RANK { 1 };

class Composer
{
private:
    std::string m_name_first {};
    std::string m_name_last {};
    std::string m_genre {};
    std::string m_fact_about {};
    int m_birth_year {};
    int m_rank {};
public:
    Composer(const std::string& name = "John", const std::string& last_name = "Doe", const std::string& genre = "Industrial", 
                const std::string& fact = "Likes to put things in a boxes", int birth_year = 1959, int rank = MIN_RANK)
        : m_name_first { name }
        , m_name_last { last_name }
        , m_genre { genre }
        , m_fact_about { fact }
        , m_birth_year { birth_year }
        , m_rank { rank }
        {
        }

    void UpdateRank(int update_rank){
        if(update_rank >= MIN_RANK && update_rank <= MAX_RANK){
            m_rank = update_rank;
        }
        else{
            std::cerr << "[ERROR]: Only rank between 1 and 10 is possible!";
        }
    }

    void Display() const{
        std::cout << "First name: " <<  m_name_first << '\n';
        std::cout << "Last name: " <<  m_name_last << '\n';
        std::cout << "Year of birth: " <<  m_birth_year << '\n';
        std::cout << "Music genre: " <<  m_genre << '\n';
        std::cout << "Interesting fact: " << m_fact_about << '\n';
        std::cout << "Rank: " << m_rank << '\n'; 
    }
};
