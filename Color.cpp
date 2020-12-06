#include "Color.h"

Color::Color()
{
    setRed(10);
    setBlue (10);
    setYellow(0);
    setWhite (2.5);
    setBlack (0);
}

Color::Color (float Red, float Blue, float Yellow, float White, float Black)
{
    setRed(Red);
    setBlue (Blue);
    setYellow(Yellow);
    setWhite (White);
    setBlack (Black);
}

void Color::setRed(float Red)
{
    red = Red;
}
void Color::setBlue (float Blue)
{
    blue = Blue;
}
void Color::setYellow(float Yellow)
{
    yellow = Yellow;
}
void Color::setWhite (float White)
{
    white = White;
}
void Color::setBlack (float Black)
{
    black = Black;
}

float Color::getRed ()
{
    return red;
}
float Color::getBlue ()
{
    return blue;
}
float Color::getYellow ()
{
    return yellow;
}
float Color::getWhite ()
{
    return white;
}
float Color::getBlack ()
{
    return black;
}

void Color::imprimircolor()
{
    cout<< "la cantidad de rojo es :"<< red << endl;
    cout<< "la cantidad de azul es: "<< blue << endl;
    cout<< "la cantidad de amarillo es: "<< yellow << endl;
    cout<< "la cantidad de blanco es: "<< white << endl;
    cout<< "la cantidad de negro es: "<< black << endl;
}

