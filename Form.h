#include <iostream>
using namespace std;

#pragma once

class Form
{
    private:
        bool circle;
        bool square;
        bool rectangle;
        bool triangle;

    public:
        Form ();
        Form ( bool circle, bool square,bool rectangle, bool triangle);

        void setCircle(bool theCircle);
        void setSquare (bool theSquare);
        void setRectangle (bool theRectangle);
        void setTriangle (bool theTriangle);

        bool getCircle ();
        bool getSquare ();
        bool getRectangle ();
        bool getTriangle ();

};