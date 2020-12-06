#include "Stickers.h"

Stickers::Stickers (int theSize, bool theBorder, Color theColor, string theForm, bool theLiner, string theTheme)
{
    setSize (theSize);
    setBorder (theBorder);
    setColor (theColor);
    setForm (theForm);
    setLiner (theLiner);
    setTheme (theTheme);
}


void Stickers::setSize(int theSize)
{
    size = theSize;
}

void Stickers::setBorder(bool theBorder)
{
    border = theBorder;
}

void Stickers::setColor(Color theColor)
{
    color = theColor;
}

void Stickers::setForm(string theForm)
{
    form = theForm;
}

void Stickers::setLiner(bool theLiner)
{
    liner = theLiner;
}

void Stickers::setTheme(string elTema)
{
    tema = elTema;
} 

int Stickers::getSize()
{
    return size;
}
int Stickers::getBorder()
{
    return border;
}
Color Stickers::getColor()
{
    return color;
}
string Stickers::getForm()
{
    return form;
}
int Stickers::getLiner()
{
    return liner;
}
string Stickers:: getTheme()
{
    return tema;
}
void Stickers::caracteristicassticker()
{
    cout << "El tamaño del sticker es: " << size << endl;
    cout << "El sticker tiene borde: " << border << endl;
    //cout << "El sticker tiene un color: " << color << endl;
    cout << "El sticker tiene delineado: " << liner << endl;
    cout << "La forma del sticker es: "<< form<< endl;
    cout << "El tema del sticker es: "<< tema << endl;
    
}