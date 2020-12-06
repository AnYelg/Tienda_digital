#include "Animal.h"

void Animal::setSize (int theSize)
{
    size = theSize;
}
void Animal::setAge (int theAge)
{
    age = theAge;
}
void Animal::setColor (Color theColor)
{
    color = theColor;
}
int Animal::getSize()
{
    return size;
}
int Animal::getAge()
{
    return age;
}
Color Animal::getColor()
{
    return color;
}