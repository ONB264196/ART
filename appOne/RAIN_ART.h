#pragma once
#include "ART.h"
class RAIN_ART :
    public ART
{
    int MaxNum = 0;
    int MinNum = 0;
    int Num = 0;
    class RAIN* Rains = nullptr;
public:
    RAIN_ART();
    ~RAIN_ART();
    void perform();
};
