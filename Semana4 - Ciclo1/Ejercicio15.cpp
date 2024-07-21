#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void Ventana()
{
    Console::SetWindowSize(60, 32);
}

int RandIntNumAdivinar(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

void EvaluarIntento(int numadivinar, int numingresado)
{
    if (numadivinar < numingresado)
    {
        cout << "Fallaste. Pista. El numero ingresado es mayor" << endl;
    }
    else
    {
        cout << "Fallaste. Pista. El numero ingresado es menor" << endl;
    }
}

void AdivinaNumero(int numadivinar, int& numingresado, bool adivinado)
{
    cout << "\t\tJuego\n";
    Console::SetCursorPosition(10, 1);
    cout << "Adivina el numero\n\n";
    /*cout << endl << numadivinar;*/
    for (int i = 1; i <= 3; i++)
    {
        if (i == 1)
        {
            cout << "Primer Intento: "; cin >> numingresado;
        }
        else if (i == 2)
        {
            cout << endl << "Segundo Intento: "; cin >> numingresado;
        }
        else
        {
            cout << endl << "Tercer Intento: "; cin >> numingresado;
        }

        if (numingresado == numadivinar)
        {
            cout << endl << "¡Felicidades!¡Adivinaste el numero!" << endl;
            adivinado = true;
            break;
        }
        else
        {
            EvaluarIntento(numadivinar, numingresado);
        }
    }

    if (!adivinado)
    {
        cout << endl << "Lo siento, has perdido. El numero era " << numadivinar << endl;
    }
}

int main()
{
    srand(time(nullptr));
    int numadivinar = RandIntNumAdivinar(1, 100);
    int numingresado;
    bool adivinado = false;

    Ventana();

    AdivinaNumero(numadivinar, numingresado, adivinado);

    system("pause>0");
    return 0;
}
