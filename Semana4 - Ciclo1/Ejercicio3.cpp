#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarLado1()
{
    int Lado1;
    do
    {
        cout << "Ingrese Lado 1: "; cin >> Lado1;
    } while (Lado1 < 1);
    return Lado1;
}

int ValidarLado2()
{
    int Lado2;
    do
    {
        cout << "Ingrese Lado 2: "; cin >> Lado2;
    } while (Lado2 < 1);
    return Lado2;
}

int ValidarLado3()
{
    int Lado3;
    do
    {
        cout << "Ingrese Lado 3: "; cin >> Lado3;
    } while (Lado3 < 1);
    return Lado3;
}

//Lado1 = a
//Lado2 = b
//Lado3 = c
bool ExistenciaTriangulo(int Lado1, int Lado2, int Lado3)
{
    return ((Lado1 + Lado2 > Lado3) && (Lado1 + Lado3 > Lado2) && (Lado2 + Lado3 > Lado1));
}

void EsTriangulo(int Lado1, int Lado2, int Lado3)
{
    if (ExistenciaTriangulo(Lado1, Lado2, Lado3))
    {
        cout << endl << "SI ES UN TRIANGULO" << endl;
    }
    else
    {
        cout << endl << "NO ES UN TRIANGULO" << endl;
    }
}

int main()
{
    int Lado1 = ValidarLado1();
    int Lado2 = ValidarLado2();
    int Lado3 = ValidarLado3();

    EsTriangulo(Lado1, Lado2, Lado3);

    system("pause>0");
    return 0;
}
