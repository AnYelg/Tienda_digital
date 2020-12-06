#include "Plantas.h"

#pragma once

class Tree: public Plantas
{
    public:
        Tree();
        Tree(int, Color, string);
        void soyarbol();
};