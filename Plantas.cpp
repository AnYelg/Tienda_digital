#include "Plantas.h"


void Plantas::setSize(int theSize)
{
    size = theSize;
}
void Plantas::setColor (Color theColor)
{
    color = theColor;
}
void Plantas::setType (string theType)
{
    type = theType;
}
int Plantas::getSize()
{
    return size;
}
Color Plantas::getColor ()
{
    return color;
}
string Plantas::getType()
{
    return type;
}