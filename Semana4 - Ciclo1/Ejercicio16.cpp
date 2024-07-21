#include "pch.h"
#include "Dados.h"

void Ventana()
{
    Console::SetWindowSize(65, 30);
}

int ValidarDado1()
{
    int dado1;
    do
    {
        cout << "Dado 1: "; cin >> dado1;
    } while (dado1 < 1 || dado1 > 6);
    return dado1;
}

int ValidarDado2()
{
    int dado2;
    do
    {
        cout << "Dado 2: "; cin >> dado2;
    } while (dado2 < 1 || dado2 > 6);
    return dado2;
}

int main()
{
    Ventana();
    int dado1 = ValidarDado1();
    int dado2 = ValidarDado2();
    char forma = '*';

    Uno(forma, dado1, dado2);
    Dos(forma, dado1, dado2);
    Tres(forma, dado1, dado2);
    Cuatro(forma, dado1, dado2);
    Cinco(forma, dado1, dado2);
    Seis(forma, dado1, dado2);

    system("pause>0");
    return 0;
}
