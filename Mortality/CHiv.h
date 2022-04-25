#pragma once
#include "CBase.h"
class CHiv : public CBase
    {

    private:
        float Deaths;
        int Cases;


    public:
        CHiv();
        ~CHiv();
        void set();
        float GetMortalityRate();
};

