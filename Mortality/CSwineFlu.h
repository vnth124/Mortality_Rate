#pragma once
#include "CBase.h"
class CSwineFlu :
    public CBase
{
private:
    float Deaths;
    int Cases;


public:
    CSwineFlu();
    ~CSwineFlu();
    void set();
    float GetMortalityRate();
};

