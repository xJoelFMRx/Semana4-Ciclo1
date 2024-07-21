#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumeros(int& num1, int& num2)
{
    cout << "Ingrese Primer Numero: "; cin >> num1;
    cout << "Ingrese Segundo Numero: "; cin >> num2;
}

void EsMultiplo(int num1, int num2)
{
    if (num1 % num2 == 0)
    {
        cout << endl << num1 << " es multiplo de " << num2 << endl;
    }
    else
    {
        cout << endl << num1 << " no es multiplo de " << num2 << endl;
    }
}

int main()
{
    int num1;
    int num2;

    GenerarNumeros(num1, num2);
    EsMultiplo(num1, num2);

    system("pause>0");
    return 0;
}
