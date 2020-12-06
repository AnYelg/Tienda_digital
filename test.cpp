#include "Stickers.h"
#include "Color.h"
#include "Form.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Llama.h"
#include "Unicorn.h"
#include "Theme.h"
#include "Plantas.h"
#include "Flores.h"
#include "Tree.h"



int main ()
{
    int acumulador = 0;
    int respuesta;
    cout<< "Hola bienvenid@ a nuestra tienda virtual, ¿Quieres comprar? si = 1 no = 0"<< endl;
    cin >> respuesta;
    while (respuesta == 1)
    {
        cout<< "Elige que producto quieres: Stickers(1)"<< endl;
        int producto;
        cin >> producto;
        if (producto == 1)
        {
            Color colorsticker;
            string tematica;
            string formasticker;
            string temasticker;
            cout<<"Usted eligio stickers. Ahora personaliza tu sticker"<< endl;
            int tamano;
            cout << "¿Qué tamaño tendra el sticker? (solo numeros)"<< endl;
            cin >> tamano;
            bool borde;
            cout << "¿Quiere que tenga un  borde su sticker? (1 si) (0 no)"<< endl;
            cin >> borde;
            int opciondecolor;
            cout << "¿Quiere el color de default(1) o uno personalizado(2)" << endl;
            cin >> opciondecolor;
            if (opciondecolor == 1) //Stickers stickerelegido(tamaño,borde,colorstickerdefault);
            {       
                Color colorstickerdefault;
                colorsticker = colorstickerdefault;
            }
            if (opciondecolor == 2)
            {
                float rojo;
                float azul;
                float amarillo;
                float blanco;
                float negro;
                cout << "Inserte la cantidad de rojo"<< endl;
                cin>> rojo;
                cout << "Inserte la cantidad de azul"<< endl;
                cin>> azul;
                cout << "Inserte la cantidad de amarillo"<< endl;
                cin>> amarillo;
                cout << "Inserte la cantidad de blanco"<< endl;
                cin>> blanco;
                cout << "Inserte la cantidad de negro"<< endl;
                cin>> negro;
                Color colorstickerpersonalizado(rojo,azul,amarillo,blanco,negro);
                colorsticker = colorstickerpersonalizado;
            }
            cout << "¿Que forma quiere que tenga su sticker? Circulo (1) Cuadrado (2) Rectangulo (3) Triangulo (4) El triangulo tiene un costo extra de $5"<< endl;
            int formaquetiene;
            cin >> formaquetiene;
            if (formaquetiene == 1)
            {
                Form defaultforma;

                formasticker = "circulo";
            }
            if (formaquetiene == 2)
            {
                Form cuadradoforma (false,true,false,false);
                formasticker = "cuadrado";
            }
            if (formaquetiene == 3)
            {
                Form rectanguloforma (false,false,true,false);
                formasticker = "rectangulo";
            }
            if (formaquetiene == 4)
            {
                Form trianguloforma (false,false,false,true);
                formasticker = "triangulo";
                acumulador = acumulador + 5;
            }
            bool delineado;
            cout << "¿Quiere que tenga un delineado su dibujo? (1 si) (0 no) "<< endl;
            cin >> delineado;
            cout<< "Elija el tema que quiere 1 para animales y 2 para Plantas"<< endl;
            int tema;
            cin >> tema;
            if (tema == 1)
            {
                tematica= "Animales";
                Theme *animal;
                int opcion; 
                cout<<"Elige un tipo de animal (1 perro, 2 gato, 3 llama y 4 unicornio ) "<< endl;
                cout<<  "Precio de perro $10, precio de gato $10, precio de llama $15, precio de unicornio $15"<< endl;
                cin>> opcion;
                if (opcion == 1)
                {
                    int cual;
                    cout<<"¿Quieres el perro default o crear el tuyo con un costo extra de $5? (1 default y 2 el tuyo)" << endl;
                    cin >> cual;
                    acumulador = acumulador + 10;
                    if (cual == 1)
                    {
                        int precio = 10;
                        Color defaultcolor;
                        animal = new Dog();
                        Dog *perro = (Dog*)animal;
                        (*perro).soyperro();
                        cout<<"El color del perro es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<precio<< endl;
                        cout<<"Tu total al momento es de: "<< acumulador << endl;

                    }
                    if (cual == 2)
                    {
                        int size;
                        int age;
                        int color;
                        string tipo;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size;
                        cout << "Inserte la edad (solo un número)"<< endl;
                        cin>> age;
                        cout << "¿Quieres el color default o crear el tuyo con un costro extra de $5? (1 default y 2 el tuyo)" << endl;
                        cin >> color;
                        if (color == 1)
                        {
                            int precio = 15;
                            Color defaultcolor;
                            cout << "Inserte el tipo de perro (solo string)"<< endl;
                            cin>> tipo;
                            animal = new Dog(size,age,defaultcolor,tipo);
                            Dog *perro = (Dog*)animal;
                            (*perro).soyperro();
                            cout<<"El color del perro es: "<< endl;
                            defaultcolor.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;
                        }
                        if (color == 2)
                        {
                            int precio = 20;
                            float rojo;
                            float azul;
                            float amarillo;
                            float blanco;
                            float negro;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro;
                            Color usuariocreo(rojo,azul,amarillo,blanco,negro);
                            cout << "Inserte el tipo de perro (solo string)"<< endl;
                            cin>> tipo;
                            animal = new Dog(size,age,usuariocreo,tipo);
                            Dog *perro = (Dog*)animal;
                            (*perro).soyperro();
                            cout<<"El color del perro es: "<< endl;
                            usuariocreo.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 10;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }

                    }

                }
                if (opcion == 2)
                { 

                    int cual1;
                    cout<<"¿Quieres el gato default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                    cin >> cual1;
                    acumulador = acumulador + 10;
                    if (cual1 == 1)
                    {
                        Color defaultcolor;
                        animal = new Cat;
                        Cat *gato = (Cat*)animal;
                        (*gato).soygato();
                        cout<<"El color del gato es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<(*gato).getPrecio()<<endl;
                        cout<<"Tu total al momento es de: "<< acumulador << endl;
                    }
                    if (cual1 == 2)
                    {
                        
                        int size1;
                        int age1;
                        int color1;
                        string tipo1;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size1;
                        cout << "Inserte la edad (solo un número)"<< endl;
                        cin>> age1;
                        cout << "¿Quieres el color default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                        cin >> color1;
                        if (color1 == 1)
                        {
                            int precio = 15;
                            Color defaultcolor1;
                            cout << "Inserte el tipo de gato (solo string)"<< endl;
                            cin>> tipo1;
                            animal = new Cat(size1,age1,defaultcolor1,tipo1);
                            Cat *gato = (Cat*)animal;
                            (*gato).soygato();
                            cout<<"El color del gato es: "<< endl;
                            defaultcolor1.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                        if (color1 == 2)
                        {
                            int precio = 20;
                            float rojo1;
                            float azul1;
                            float amarillo1;
                            float blanco1;
                            float negro1;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo1;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul1;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo1;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco1;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro1;
                            cout << "Inserte el tipo de gato (solo string)"<< endl;
                            cin>> tipo1;
                            Color usuariocreo1(rojo1,azul1,amarillo1,blanco1,negro1);
                            animal = new Cat(size1,age1,usuariocreo1,tipo1);
                            Cat *gato = (Cat*)animal;
                            (*gato).soygato();
                            cout<<"El color del gato es: "<< endl;
                            usuariocreo1.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 10;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                    }

                }
                if (opcion == 3)
                {
                    int cual;
                    cout<<"¿Quieres la llama default o crear la tuya por $5 más? (1 default y 2 el tuyo)" << endl;
                    cin >> cual;
                    acumulador = acumulador + 15;
                    if (cual == 1)
                    {
                        Color defaultcolor;
                        animal = new Llama;
                        Llama *llama = (Llama*)animal;
                        (*llama).soyllama();
                        cout<<"El color de la llama es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<(*llama).getPrecio()<<endl;
                        cout<<"Tu total al momento es de: "<< acumulador << endl;
                    }
                    if (cual == 2)
                    {
                        int size;
                        int age;
                        int color;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size;
                        cout << "Inserte la edad (solo un número)"<< endl;
                        cin>> age;
                        cout << "¿Quieres el color default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                        cin >> color;
                        if (color == 1)
                        {
                            int precio = 20;
                            Color defaultcolor;
                            animal = new Llama(size,age,defaultcolor);
                            Llama *llama = (Llama*)animal;
                            (*llama).soyllama();
                            cout<<"El color de la llama es: "<< endl;
                            defaultcolor.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                        if (color == 2)
                        {
                            int precio = 25;
                            float rojo;
                            float azul;
                            float amarillo;
                            float blanco;
                            float negro;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro;
                            Color usuariocreo(rojo,azul,amarillo,blanco,negro);
                            animal = new Llama(size,age,usuariocreo);
                            Llama *llama = (Llama*)animal;
                            (*llama).soyllama();
                            cout<<"El color de la llama es: "<< endl;
                            usuariocreo.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 10;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                    }
                }
                if (opcion == 4)
                {
                    int cual;
                    cout<<"¿Quieres el unicornio default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                    cin >> cual;
                    acumulador = acumulador + 15;
                    if (cual == 1)
                    {
                        Color defaultcolor;
                        animal = new Unicorn;
                        Unicorn *unicornio = (Unicorn*)animal;
                        (*unicornio).soyunicornio();
                        cout<<"El color del unicornio es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<(*unicornio).getPrecio()<<endl;
                        cout<<"Tu total al momento es de: "<< acumulador << endl;
                        
                    }
                    if (cual == 2)
                    {
                        int size;
                        int age;
                        int color;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size;
                        cout << "Inserte la edad (solo un número)"<< endl;
                        cin>> age;
                        cout << "¿Quieres el color default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                        cin >> color;
                        if (color == 1)
                        {
                            int precio = 20;
                            Color defaultcolor;
                            animal = new Unicorn(size,age,defaultcolor);
                            Unicorn *unicornio = (Unicorn*)animal;
                            (*unicornio).soyunicornio();
                            cout<<"El color del unicornio es: "<< endl;
                            defaultcolor.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                        if (color == 2)
                        {
                            int precio = 25;
                            float rojo;
                            float azul;
                            float amarillo;
                            float blanco;
                            float negro;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro;
                            Color usuariocreo(rojo,azul,amarillo,blanco,negro);
                            animal = new Unicorn(size,age,usuariocreo);
                            Unicorn *unicornio = (Unicorn*)animal;
                            (*unicornio).soyunicornio();
                            cout<<"El color del unicornio es: "<< endl;
                            usuariocreo.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 10;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                    }
                }
            }
            if (tema == 2)
            {
                Theme *planta;
                int opcion; 
                cout<<"Elige si quieres una flor o un arbol (Flor = 1, Arbol = 2) "<< endl;
                cout<< "Precio flor $15, precio arbol $15"<< endl;
                cin>> opcion;
                if (opcion == 1)
                {
                    acumulador = acumulador + 15;
                    tematica = "Plantas";
                    int cual;
                    cout<<"¿Quieres la flor default o crear la tuya por $5 más? (1 default y 2 el tuyo)" << endl;
                    cin >> cual;
                    if (cual == 1)
                    {
                        Color defaultcolor;
                        planta = new Flores();
                        Flores *flor = (Flores*)planta;
                        (*flor).soyflor();
                        cout<<"El color de la flor es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<(*flor).getPrecio()<<endl;
                        cout<<"Tu total al momento es de: "<< acumulador << endl;
                        
                    }
                    if (cual == 2)
                    {
                        acumulador = acumulador + 5;
                        int size;
                        string type;
                        int color;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size;
                        cout << "Inserte el tipo de flor (solo string)"<< endl;
                        cin>> type;
                        cout << "¿Quieres el color default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                        cin >> color;
                        if (color == 1)
                        {
                            int precio = 20;
                            Color defaultcolor;
                            planta = new Flores(size,defaultcolor,type);
                            Flores *flor = (Flores*)planta;
                            (*flor).soyflor();
                            cout<<"El color de la flor es: "<< endl;
                            defaultcolor.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                        if (color == 2)
                        {
                            int precio = 25;
                            float rojo;
                            float azul;
                            float amarillo;
                            float blanco;
                            float negro;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro;
                            Color usuariocreo(rojo,azul,amarillo,blanco,negro);
                            planta = new Flores(size,usuariocreo,type);
                            Flores *flor = (Flores*)planta;
                            (*flor).soyflor();
                            cout<<"El color de la flor es: "<< endl;
                            usuariocreo.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }

                    }
                }
                if (opcion == 2)
                {
                    tematica = "Plantas";
                    int cual;
                    cout<<"¿Quieres el arbol default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                    cin >> cual;
                    acumulador = acumulador + 15;
                    if (cual == 1)
                    {
                        Color defaultcolor;
                        planta = new Tree();
                        Tree *arbol = (Tree*)planta;
                        (*arbol).soyarbol();
                        cout<<"El color del arbol es: "<< endl;
                        defaultcolor.imprimircolor();
                        cout<<"EL precio es: "<<(*arbol).getPrecio()<<endl; 
                        cout<<"Tu total al momento es de: "<< acumulador << endl;  
                    }
                    if (cual == 2)
                    {
                        acumulador = acumulador + 5;
                        int size;
                        string type;
                        int color;
                        cout << "Inserte el tamaño (solo un número)"<< endl;
                        cin>> size;
                        cout << "Inserte el tipo de arbol (solo string)"<< endl;
                        cin>> type;
                        cout << "¿Quieres el color default o crear el tuyo por $5 más? (1 default y 2 el tuyo)" << endl;
                        cin >> color;
                        if (color == 1)
                        {
                            int precio = 20;
                            Color defaultcolor;
                            planta = new Tree(size,defaultcolor,type);
                            Tree *arbol = (Tree*)planta;
                            (*arbol).soyarbol();
                            cout<<"El color del arbol es: "<< endl;
                            defaultcolor.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }
                        if (color == 2)
                        {
                            int precio = 25;
                            float rojo;
                            float azul;
                            float amarillo;
                            float blanco;
                            float negro;
                            cout << "Inserte la cantidad de rojo"<< endl;
                            cin>> rojo;
                            cout << "Inserte la cantidad de azul"<< endl;
                            cin>> azul;
                            cout << "Inserte la cantidad de amarillo"<< endl;
                            cin>> amarillo;
                            cout << "Inserte la cantidad de blanco"<< endl;
                            cin>> blanco;
                            cout << "Inserte la cantidad de negro"<< endl;
                            cin>> negro;
                            Color usuariocreo(rojo,azul,amarillo,blanco,negro);
                            planta = new Tree(size,usuariocreo,type);
                            Tree *arbol = (Tree*)planta;
                            (*arbol).soyarbol();
                            cout<<"El color del arbol es: "<< endl;
                            usuariocreo.imprimircolor();
                            cout<<"EL precio es: "<<precio<<endl;
                            acumulador = acumulador + 5;
                            cout<<"Tu total al momento es de: "<< acumulador << endl;

                        }

                    }
                }
            }

            cout << "Resumen de sticker: "<<endl;
            Stickers stickerseleccionado (tamano,borde,colorsticker,formasticker,delineado,tematica);
            stickerseleccionado.caracteristicassticker();
            stickerseleccionado.getColor().imprimircolor();
            cout<<"¿Quieres seguir comprando? si = 1 no = 0"<< endl;
            cin>>respuesta;  
        }
    cout<<"Tu total es: $"<< acumulador<< endl;
    }
    cout << "Gracias por visitar nuestra tienda." << endl;
    cout << "Atte: Andrea y Joshua." << endl;
}