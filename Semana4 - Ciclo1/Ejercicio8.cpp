#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarZona()
{
    int zona;
    do
    {
        cout << "Ingrese zona (1 - 2): "; cin >> zona;
    } while (zona < 1 || zona > 2);
    return zona;
}

double ValidarKilowatts()
{
    double kilowatts;
    do
    {
        cout << "Ingrese consumo: "; cin >> kilowatts;
    } while (kilowatts < 60);
    return kilowatts;
}

void MontoPagar(int zona, double kilowatts)
{
    double montopagar = 0;
    if (zona == 1)
    {
        montopagar = 50;
        if (kilowatts <= 100)
        {
            montopagar += kilowatts * 0.75;
        }
        else if (kilowatts > 100)
        {
            montopagar += (100 * 0.75) + ((kilowatts - 100) * 0.9);
        }
    }
    else
    {
        montopagar = 25;
        if (kilowatts <= 100)
        {
            montopagar += kilowatts * 0.30;
        }
        else if (kilowatts > 100)
        {
            montopagar += (100 * 0.30) + ((kilowatts - 100) * 0.7);
        }
    }

    cout << endl << "El monto a pagar es: S/" << montopagar << endl;
}

int main()
{
    int zona = ValidarZona();
    double kilowatts = ValidarKilowatts();

    MontoPagar(zona, kilowatts);

    system("pause>0");
    return 0;
}
