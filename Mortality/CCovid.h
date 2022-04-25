#pragma once
#include "CBase.h"

class CCovid : public CBase
{

private:
    float Deaths;
    int Cases;

public:
    CCovid();
    ~CCovid();
    void set();
    float GetMortalityRate();


};