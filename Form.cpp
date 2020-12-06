#include "Form.h"


Form::Form()
{
    setCircle(true);
    setSquare (false);
    setRectangle (false);
    setTriangle (false);
}
Form::Form (bool theCircle, bool theSquare,bool theRectangle, bool theTriangle)
{
    setCircle(theCircle);
    setSquare (theSquare);
    setRectangle (theRectangle);
    setTriangle (theTriangle);
}
void Form::setCircle(bool theCircle)
{
    circle = theCircle;
}
void Form::setSquare (bool theSquare)
{
    square = theSquare;
}
void Form::setRectangle (bool theRectangle)
{
    rectangle = theRectangle;
}
void Form::setTriangle (bool theTriangle)
{
    triangle = theTriangle;
}

bool Form::getCircle ()
{
    return circle;
}
bool Form::getSquare ()
{
    return square;
}
bool Form::getRectangle ()
{
    return rectangle;
}
bool Form::getTriangle ()
{
    return triangle;
}