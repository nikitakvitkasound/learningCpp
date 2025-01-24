#ifndef G_DATABASE_H_
#define G_DATABASE_H_

#include <vector>
#include "g_composer.h"
#include "g_user_interface.h"

class Database
{
private:
    std::vector<Composer> composers {};
public:
    void AddComposer(){
        composers.push_back(UIcmd::SetComposer());
    }

    void EditComposerByID(){
        int id { UIcmd::GetNumber("Edit by ID? Enter the ID: ") };
        if(id == 0){
            id = 1;
        }
        --id;
        auto tmp = composers.begin() + id;
        tmp->name = UIcmd::GetString("Enter new first name: ");
        tmp->name_last = UIcmd::GetString("Enter new last name: ");
        tmp->year_birth = UIcmd::GetNumber("Enter new year of birth: ");
        tmp->genre = UIcmd::GetString("Enter new genre: ");
        tmp->fact_about = UIcmd::GetString("Enter new fact: ");
        tmp->rank = UIcmd::GetNumber("Enter new rank: ");
    }

    void DisplayByID(){
        int id { UIcmd::GetNumber("Display by ID? Enter the ID: ") }; 
        if(id == 0){
            id = 1;
        }
        UIcmd::GetComposer(composers.at(static_cast<size_t>(--id))); // 0-based vector but id starts from 1. 
    }

    void DisplayByRank(){
        int search_rank { UIcmd::GetNumber("Display by rank? Enter the rank: ") };
        for(auto& comp : composers){
            if(comp.rank == search_rank){
                UIcmd::GetComposer(comp);
            }
        }
    }

    void DisplayByName(){
        std::string search_name { UIcmd::GetString("Display by name? Enter the name: ")};
        for(auto& comp : composers){
            if(comp.name == search_name || comp.name_last == search_name){
                UIcmd::GetComposer(comp);
            }
        }
    }

    void DisplayAll(){
        for(auto& comp : composers){
            UIcmd::GetComposer(comp);
        }
    }
};

#endif
