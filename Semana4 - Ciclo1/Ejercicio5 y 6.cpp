#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarCantTipo1()
{
    int cantTipo1;
    do
    {
        cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: "; cin >> cantTipo1;
    } while (cantTipo1 < 0);
    return cantTipo1;
}

int ValidarCantTipo2()
{
    int cantTipo2;
    do
    {
        cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: "; cin >> cantTipo2;
    } while (cantTipo2 < 0);
    return cantTipo2;
}

int ValidarCantTipo3()
{
    int cantTipo3;
    do
    {
        cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: "; cin >> cantTipo3;
    } while (cantTipo3 < 0);
    return cantTipo3;
}

double ValidarPropina()
{
    double propina;
    do
    {
        cout << "Ingrese el Monto de la Propina: "; cin >> propina;
    } while (propina < 1);
    return propina;
}

void MostrarMontoTotalySiesoNoSuf(int cantTipo1, int cantTipo2, int cantTipo3, double propina)
{
    double montototal = 0;
    montototal = 0.75 * cantTipo1 + 1.15 * cantTipo2 + 0.65 * cantTipo3;

    cout << endl << "El monto total de la compra es: " << montototal << endl;

    if (propina >= montototal)
    {
        cout << "LA PROPINA FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
    }
    else if (propina < montototal)
    {
        cout << "LA PROPINA NO FUE SUFICIENTE PARA PAGAR POR LOS CARAMELOS" << endl;
    }
}

int main()
{
    int cantTipo1 = ValidarCantTipo1(); //Ambrosoli
    int cantTipo2 = ValidarCantTipo2(); //Tic Tac
    int cantTipo3 = ValidarCantTipo3(); //Donofrio
    double propina = ValidarPropina();

    MostrarMontoTotalySiesoNoSuf(cantTipo1, cantTipo2, cantTipo3, propina);

    system("pause>0");
    return 0;
}
