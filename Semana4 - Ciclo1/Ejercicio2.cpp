#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarEdad()
{
    int edad;
    do
    {
        cout << "Ingrese la edad de la persona: "; cin >> edad;
    } while (edad < 1);
    return edad;
}

void PrecioEntrada(int edad)
{
    double precioentrada = 0;
    if (edad < 18)
    {
        precioentrada = 7;
    }
    else if (edad >= 18 && edad <= 50)
    {
        precioentrada = 15;
    }
    else
    {
        precioentrada = 5;
    }

    cout << endl << "El precio de la entrada es de S/" << precioentrada << endl;
}

int main()
{
    int edad = ValidarEdad();

    PrecioEntrada(edad);

    system("pause>0");
    return 0;
}
