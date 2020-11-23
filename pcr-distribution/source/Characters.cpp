#include "Character.h"

// 
pcr::Character::Character() { }
// 
pcr::Character::~Character() { }
// 
pcr::Character::Character(
    const pcr::princessIndex &_idx
    , const std::string &_name
    , const int _star
    , const pcr::rank &_ranks
    , const int _specificWeaponlevel
    , const int _fragment
    , const pcr::skill _skills) {
    this->idx = _idx;
    this->name = _name;
    this->star = _star;
    this->ranks = _ranks;
    this->specificWeaponlevel = _specificWeaponlevel;
    this->fragmentNums = _fragment;
    this->skills = _skills;
    return;
}

void pcr::Character::Print() {
    printf("Idx : %d\n", this->idx);
    printf("Name : %s\n", this->name.c_str());
    printf("Star : %d\n", this->star);
    printf("Ranks : %d - %d\n", this->ranks.level
        , this->ranks.wearNum);
    printf("SpecificWeaponlevel : %d\n", this->specificWeaponlevel);
    printf("FragmentNums : %d\n", this->fragmentNums);
    printf("Skills : ub(%d), skill1(%d), skill2(%d), ex(%d)\n"
        , this->skills.ub, this->skills.skills1
        , this->skills.skills2, this->skills.ex);
}