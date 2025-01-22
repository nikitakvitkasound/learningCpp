#ifndef G_COMPOSER_H_
#define G_COMPOSER_H_

#include <string>

struct Composer
{
    const int COMPOSER_RANK_MAX { 1 };
    const int COMPOSER_RANK_MIN { 10 };
    const int COMPOSER_EARLY_YEAR { 0 };

    std::string name {};
    std::string name_last {};
    std::string genre {};
    std::string fact_about {};
    int year_birth {};
    int rank {};

    Composer(const std::string& _name, const std::string& _name_last, const std::string& _genre, const std::string& _fact_about, int _year_birth, int& _rank)
        : name { _name }
        , name_last { _name_last }
        , genre { _genre }
        , fact_about { _fact_about }
        , year_birth { _year_birth }
        , rank { _rank }
    {
        std::cout << &_rank << ' ' << &rank;
        if(year_birth < COMPOSER_EARLY_YEAR){
            year_birth = COMPOSER_EARLY_YEAR;
        }
        if(rank > COMPOSER_RANK_MIN){
            rank = COMPOSER_RANK_MIN;
        }
        if(rank < COMPOSER_RANK_MAX){
            rank = COMPOSER_RANK_MAX;
        }
        // above is instead of:
        // year_birth { _year_birth < COMPOSER_EARLY_YEAR ? COMPOSER_EARLY_YEAR : _year_birth }
        // rank { _rank > COMPOSER_RANK_MIN ? COMPOSER_RANK_MIN : (_rank < COMPOSER_RANK_MAX ? COMPOSER_RANK_MAX : _rank) }
    }
};

#endif
