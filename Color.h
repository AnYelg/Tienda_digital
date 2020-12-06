#include <iostream>
using namespace std;

#pragma once

class Color
{
    private:
        float red;
        float blue;
        float yellow;
        float white;
        float black;
    public:
        Color ();
        Color (float Red, float Blue, float Yellow, float White, float Black);

        void setRed(float Red);
        void setBlue (float Blue);
        void setYellow(float Yellow);
        void setWhite (float White);
        void setBlack (float Black);

        float getRed ();
        float getBlue ();
        float getYellow ();
        float getWhite ();
        float getBlack ();

        void imprimircolor ();

};