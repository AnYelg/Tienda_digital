#include "Unicorn.h"

Unicorn::Unicorn()
{
    setSize(12);
    setAge(2);
    setColor(color);
    setPrecio(15);
}
Unicorn::Unicorn(int theSize, int theAge, Color theColor)
{
    setSize(theSize);
    setAge(theAge);
    setColor(theColor);
    setPrecio(15);
}
void Unicorn::soyunicornio()
{
    cout<<"El tamaño de unicornio es "<< size << "cm" << endl;
    cout<<"La edad de unicornio es "<< age << endl;
    //cout<<"El color de perro es " << color << endl;
}