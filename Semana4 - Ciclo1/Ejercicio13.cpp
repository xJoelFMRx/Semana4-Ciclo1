#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarFabricante()
{
    char fabricante;
    do
    {
        cout << "Fabricante: "; cin >> fabricante;
    } while (fabricante != 'M' && fabricante != 'A' && fabricante != 'L');
    return fabricante;
}

char ValidarTipoPrograma()
{
    char programa;
    do
    {
        cout << "Tipo de Programa: "; cin >> programa;
    } while (programa != 'S' && programa != 'L');
    return programa;
}

char ValidarDispositivo()
{
    char dispositivo;
    do
    {
        cout << "Dispositivo: "; cin >> dispositivo;
    } while (dispositivo != 'C' && dispositivo != 'T' && dispositivo != 'O');
    return dispositivo;
}

void CostoTotal(char fabricante, char programa, char dispositivo)
{
    int costototal = 0;
    if (fabricante == 'M')
    {
        if (programa == 'S')
        {
            costototal = 1500;
        }
        else
        {
            if (dispositivo == 'C')
            {
                costototal = 1800;
            }
            else if (dispositivo == 'T')
            {
                costototal = 1200;
            }
            else
            {
                costototal = 900;
            }
        }
    }
    else if (fabricante == 'A')
    {
        if (programa == 'S')
        {
            costototal = 2500;
        }
        else
        {
            if (dispositivo == 'C')
            {
                costototal = 1900;
            }
            else if (dispositivo == 'T')
            {
                costototal = 1800;
            }
            else
            {
                costototal = 1600;
            }
        }
    }
    else
    {
        if (programa == 'S')
        {
            costototal = 1000;
        }
        else
        {
            if (dispositivo == 'C')
            {
                costototal = 100;
            }
            else if (dispositivo == 'T')
            {
                costototal = 150;
            }
            else
            {
                costototal = 50;
            }
        }
    }

    cout << endl << "El costo total es: S/" << costototal << endl;
}

int main()
{
    char fabricante = ValidarFabricante();
    char programa = ValidarTipoPrograma();
    char dispositivo = '\0';
    if (programa == 'L')
    {
        dispositivo = ValidarDispositivo();
    }

    CostoTotal(fabricante, programa, dispositivo);

    system("pause>0");
    return 0;
}
