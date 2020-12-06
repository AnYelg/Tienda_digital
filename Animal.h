#include <iostream>
#include <string>
#include "Color.h"
#include "Theme.h"
using namespace std;
#pragma once

class Animal: public Theme
{
    
    protected:
        int size;
        int age;
        Color color;
        void setSize (int theSize);
        void setAge (int theAge);
        void setColor (Color theColor);
        int getSize();
        int getAge();
        Color getColor();
};