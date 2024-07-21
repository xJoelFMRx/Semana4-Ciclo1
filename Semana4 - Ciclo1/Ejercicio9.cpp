#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

struct Dron
{
    int id;
    double energia;
    double distancia;
    double calidadseñal;

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

    int ValidarCalidadSeñal()
    {
        do
        {
            cout << "Calidad de la señal: "; cin >> calidadseñal;
        } while (calidadseñal < 1 || calidadseñal > 100);
        return calidadseñal;
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

void EvaluarSeñal(Dron* drones)
{
    if (drones->calidadseñal > 90.0)
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
            drones[i].ValidarCalidadSeñal();
        }
        cout << endl;
    }

    cout << "\n==============RESULTADOS==============";
    for (int i = 0; i < 5; i++)
    {
        if (!AsignarDron(&drones[i]))
        {
            EvaluarSeñal(&drones[i]);
        }
    }

    delete[] drones;

    system("pause>0");
    return 0;
}