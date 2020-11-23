#pragma once
#include "stdlib.h"
#include "string"
#include "Predef.h"

namespace pcr {
class Character {
    
private:
    pcr::princessIndex idx;
    std::string name;
    int star;
    pcr::rank ranks;
    int specificWeaponlevel;
    int fragmentNums;
    pcr::skill skills;
public:
    Character();
    Character(
        const pcr::princessIndex &_idx
        , const std::string &_name
        , const int _star
        , const pcr::rank &_ranks
        , const int _specificWeaponlevel
        , const int _fragment
        , const pcr::skill _skills);
    ~Character();

    void Print();
};

}
