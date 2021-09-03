#pragma once
#include "ART.h"
class SQUARE_ART :
    public ART
{
    int MaxCount = 0;
    int Count = 0;
    class SQUARE* Square = 0;
public:
    SQUARE_ART();
    ~SQUARE_ART();
    void perform();
};

