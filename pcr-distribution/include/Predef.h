#pragma once
namespace pcr {
    //人物 Index
    enum princessIndex {
        YI_LI_YA = 0,
        ZHEN_BU,
    };

    // rank 等级
    typedef struct _rank {
        int level;
        int wearNum;
    } rank;
    // 技能情况
    typedef struct _skill {
        int ub;
        int skills1;
        int skills2;
        int ex;
    } skill;
}