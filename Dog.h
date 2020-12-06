#include "Animal.h"


#pragma once

class Dog:public Animal
{
    
    protected:
        string type;
    public:
        Dog();
        Dog(int, int, Color, string);
        void setType (string theType);
        string getType ();
        void soyperro();
};