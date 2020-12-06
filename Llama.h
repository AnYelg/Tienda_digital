
#include "Animal.h"

#pragma once

class Llama: public Animal
{
    public:
        Llama();
        Llama(int, int, Color);
        void soyllama ();
};