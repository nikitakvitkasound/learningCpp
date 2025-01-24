#ifndef G_DATABASE_H_
#define G_DATABASE_H_

#include <vector>
#include "g_composer.h"
#include "g_user_interface.h"

// add AddComposer ++ 
// add GetComposerLast ++ 
// add EditComposer
// add List Last composer ++
// add List Composer by ID ++
// add List by name ++
// add List all ++
// add List by rank ++

class Database
{
private:
    std::vector<Composer> composers {};
public:
    void AddComposer(){
        composers.push_back(UIcmd::SetComposer());
    }

    void EditComposer(){
        composers.erase(composers.end() - 1);
    }

    void DisplayLastAdded(){
        UIcmd::GetComposer(composers.back());
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
