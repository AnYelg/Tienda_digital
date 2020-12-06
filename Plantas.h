#include <iostream>
#include <string>
#include "Color.h"
#include "Theme.h"
using namespace std;
#pragma once

class Plantas: public Theme
{
    protected:
        int size;
        Color color;
        string type;
        void setSize(int);
        void setColor (Color);
        void setType (string);
        int getSize();
        Color getColor ();
        string getType();
};