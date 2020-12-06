#include "Animal.h"

#pragma once

class Cat: public Animal
{
    protected:
        string type;
    public:
        Cat();
        Cat(int, int, Color, string);
        
        void setType (string theType);
      
        string getType ();
        void soygato();
};