#include "pch.h"
#include "iostream"
#include "string"

using namespace System;
using namespace std;

int ValidarNumero()
{
    int num;
    do
    {
        cout << "Ingrese numero: "; cin >> num;
    } while (num < 1 || num > 100);
    return num;
}

string NumeroRomano(int num)
{
    string numRomanos[9] = { "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int valorRomanos[9] = { 100, 90, 50, 40, 10, 9, 5, 4, 1 };

    string TotalRomano = "";
    for (int i = 0; i < 9 && num > 0; i++) //El num de aca va recogiendo lo del num final de while y asi sucesivamente
    {
        while (num >= valorRomanos[i]) //Para saber a partir de que numero romano tomamos
        {
            TotalRomano += numRomanos[i];
            num -= valorRomanos[i];
        }
    }

    return TotalRomano;
}

int main()
{
    int num = ValidarNumero();
    string TotalRomano = NumeroRomano(num);

    cout << endl << "El numero " << num << " en romano es: " << TotalRomano << endl;

    system("pause>0");
    return 0;
}
