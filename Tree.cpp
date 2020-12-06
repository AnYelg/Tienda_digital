#include "Tree.h"

Tree::Tree()
{
    setSize (150);
    setColor (color);
    setType("roble");
    setPrecio(15);
}
Tree::Tree(int theSize, Color theColor, string theType)
{
    setSize (theSize);
    setColor (theColor);
    setType(theType);
    setPrecio(15);
}
void Tree::soyarbol()
{
    cout<<"El tipo de arbol es "<< type << endl;
    cout<<"El tamaño de arbol es "<< size << "cm" << endl;
}