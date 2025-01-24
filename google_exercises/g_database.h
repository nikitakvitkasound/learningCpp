#ifndef G_DATABASE_H_
#define G_DATABASE_H_

#include <vector>
#include "g_composer.h"
#include "g_user_interface.h"

// add AddComposer ++ 
// add GetComposer 
// add PromoteComposer
// add DemoteComposer
// add List by name
// add List all ++
// add List by rank

class Database
{
private:
    std::vector<Composer> composers {};
public:
    // Database();
    // ~Database();
    void AddComposer(){
        composers.push_back(UIcmd::SetComposer());
    }

    void DisplayAll(){
        for(auto& comp : composers){
            UIcmd::GetComposer(comp);
        }
    }

    // void DisplayByRank(){
    //     for(auto& comp : composers){
    //         UIcmd::GetComposer(comp);
    //     }
    // }
};

#endif
