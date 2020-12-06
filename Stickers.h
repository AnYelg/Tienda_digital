#include <iostream>
#include"Color.h"
using namespace std;

#pragma once

class Stickers 
{
    private:
        int size;
        bool border;
        Color color;
        string form;
        bool liner;
        string tema;
    public:
        Stickers (int, bool, Color, string, bool, string);
        void setSize (int theSize);
        void setBorder (bool theBorder);
        void setColor (Color theColor);
        void setLiner (bool theLiner);
        void setForm (string theForm);
        void setTheme (string theTheme);
        void caracteristicassticker();

        int getSize();
        int getBorder();
        Color getColor();
        string getForm();
        int getLiner();
        string getTheme();
};