#include "stdlib.h"
#include "stdio.h"
#include "opencv2/opencv.hpp"
#include "ostream"
#include "Predef.h"
#include "Character.h"

int main() {
    pcr::rank rk;
    rk.level = 11;
    rk.wearNum = 3;
    pcr::skill skil;
    skil.ub = 110;
    skil.skills1 = 110;
    skil.skills2 = 110;
    skil.ex = 110;

    pcr::Character a(pcr::princessIndex::YI_LI_YA, "yly", 5, rk, -1, 0, skil); 
    a.Print();  
    return 1;
}