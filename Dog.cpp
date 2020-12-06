#include "Dog.h"

Dog::Dog()
{
    setSize(12);
    setAge(2);
    setColor(color);
    setType("corgi");
    setPrecio(10);
}
Dog::Dog(int theSize, int theAge, Color theColor, string theType)
{
    setSize(theSize);
    setAge(theAge);
    setColor(theColor);
    setType(theType);
    setPrecio(10);
}
void Dog::setType (string theType)
{
    type = theType;
}
string Dog::getType ()
{
    return type;
}
void Dog::soyperro()
{
    
    cout<<"El tipo de perro es "<< type << endl;
    cout<<"El tamaño de perro es "<< size << "cm" << endl;
    cout<<"La edad de perro es "<< age << endl;
    //cout<<"El color de perro es " << color.imprimircolor()<< endl;
}