#include "Cat.h"

Cat::Cat()
{
    setSize(12);
    setAge(2);
    setColor(color);
    setType("turtoiseshell");
    setPrecio(10);
}
Cat::Cat(int theSize, int theAge, Color theColor, string theType)
{
    setSize(theSize);
    setAge(theAge);
    setColor(theColor);
    setType(theType);
    setPrecio(10);
}
void Cat::setType (string theType)
{
    type = theType;
}
string Cat::getType ()
{
    return type;
}
void Cat::soygato()
{
    cout<<"El tipo de gato es "<< type << endl;
    cout<<"El tamaño de gato es "<< size << "cm" << endl;
    cout<<"La edad de gato es "<< age << endl;
    //cout<<"El color de perro es " << color << endl;
}