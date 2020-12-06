#include "Flores.h"

Flores::Flores()
{
    setSize (15);
    setColor (color);
    setType("girasol");
    setPrecio(15);
}
Flores::Flores(int theSize, Color theColor, string theType)
{
    setSize (theSize);
    setColor (theColor);
    setType(theType);
    setPrecio(15);
}
void Flores::soyflor()
{
    cout<<"El tipo de flor es: "<< type << endl;
    cout<<"El tamaño de flor es: "<< size << "cm" << endl;
}