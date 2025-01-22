#ifndef G_DATABASE_H_
#define G_DATABASE_H_

#include <vector>
#include "g_composer.h"

class Database
{
private:
    std::vector<Composer> composers;
public:
    void AddComposer(const Composer& comp){
        composers.push_back(comp);
    }
};

#endif
