#include "Llama.h"

Llama::Llama()
{
    setSize(12);
    setAge(2);
    setColor(color);
    setPrecio(15);
}
Llama::Llama(int theSize, int theAge, Color theColor)
{
    setSize(theSize);
    setAge(theAge);
    setColor(theColor);
    setPrecio(15);
}
void Llama::soyllama()
{
    cout<<"El tamaño de llama es "<< size << "cm" << endl;
    cout<<"La edad de llama es "<< age << endl;
    //cout<<"El color de perro es " << color << endl;
}
