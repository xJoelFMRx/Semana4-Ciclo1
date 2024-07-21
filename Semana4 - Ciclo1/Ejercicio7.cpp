#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumero(int& num)
{
    cout << "Ingrese numero: "; cin >> num;
}

void EsCapicua(int num)
{
    int a; //Primer lugar
    int c; //Tercer lugar
    a = num / 100;
    c = num % 10;

    if (num >= 100 && num <= 999 || num <= -100 && num >= -999)
    {
        if (a == c)
        {
            cout << endl << "Es numero capicua" << endl;
        }
        else
        {
            cout << endl << "No es numero capicua" << endl;
        }
    }
    else
    {
        cout << endl << "Numero Incorrecto" << endl;
    }
}

int main()
{
    int num;

    GenerarNumero(num);
    EsCapicua(num);

    system("pause>0");
    return 0;
}
