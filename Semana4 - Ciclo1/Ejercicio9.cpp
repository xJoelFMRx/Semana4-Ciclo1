#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

struct Dron
{
    int id;
    double energia;
    double distancia;
    double calidadse�al;

    int ValidarEnergia()
    {
        do
        {
            cout << "Consumo de energia: "; cin >> energia;
        } while (energia < 5 || energia > 100);
        return energia;
    }

    int ValidarDistancia()
    {
        do
        {
            cout << "Distancia entre los nodos: "; cin >> distancia;
        } while (distancia < 50 || distancia > 250);
        return distancia;
    }

    int ValidarCalidadSe�al()
    {
        do
        {
            cout << "Calidad de la se�al: "; cin >> calidadse�al;
        } while (calidadse�al < 1 || calidadse�al > 100);
        return calidadse�al;
    }
};

bool AsignarDron(Dron* drones)
{
    if (drones->energia < 20.0 && drones->distancia > 100.0)
    {
        cout << endl << "Dron " << drones->id << " asignado de manera optima";
        return true;
    }
    return false;
}

void EvaluarSe�al(Dron* drones)
{
    if (drones->calidadse�al > 90.0)
    {
        cout << endl << "Dron " << drones->id << " asignado de manera alternativa";
    }
    else
    {
        cout << endl << "Dron " << drones->id << " cambia su ruta de vuelo";
    }
}

int main()
{
    Dron* drones = new Dron[5];
    for (int i = 0; i < 5; i++)
    {
        drones[i].id = i + 1;
        cout << "Datos dron " << drones[i].id << endl;
        drones[i].ValidarEnergia();
        drones[i].ValidarDistancia();
        if (!(drones[i].energia < 20.0 && drones[i].distancia > 100.0))
        {
            drones[i].ValidarCalidadSe�al();
        }
        cout << endl;
    }

    cout << "\n==============RESULTADOS==============";
    for (int i = 0; i < 5; i++)
    {
        if (!AsignarDron(&drones[i]))
        {
            EvaluarSe�al(&drones[i]);
        }
    }

    delete[] drones;

    system("pause>0");
    return 0;
}