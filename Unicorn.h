#include "Animal.h"

#pragma once

class Unicorn: public Animal
{
    public:
        Unicorn();
        Unicorn(int, int, Color);
        void soyunicornio();
};