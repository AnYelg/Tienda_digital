#include "Plantas.h"

#pragma once

class Flores: public Plantas
{
    public:
        Flores();
        Flores(int, Color, string);
        void soyflor();
};