#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumero(int& num)
{
    cout << "Ingrese un numero entero: "; cin >> num;
}

void esParImpar(int num)
{
    if (num % 2 == 0)
    {
        cout << endl << "Es un numero par" << endl;
    }
    else
    {
        cout << endl << "Es un numero impar" << endl;
    }
}

int main()
{
    int num;

    GenerarNumero(num);
    esParImpar(num);

    system("pause>0");
    return 0;
}
