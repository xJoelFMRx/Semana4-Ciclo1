#include "pch.h"
#include "Cartas.h"

void Ventana()
{
    Console::SetWindowSize(60, 32);
}

void MostrarMenu()
{
    cout << "\tElija el palo de barajas\n";
    cout << "\t-------------------------\n";
    cout << "\t< C > Corazones\n";
    cout << "\t< D > Diamantes\n";
    cout << "\t< T > Treboles\n";
    cout << "\t< E > Espadas\n";
    cout << "\t< 9 > Salir\n";
}

int ValidarPrimCarta()
{
    int primcarta;
    do
    {
        cout << "Muestre la Primera Carta: "; cin >> primcarta;
    } while (primcarta < 1 || primcarta > 13);
    return primcarta;
}

int ValidarSegCarta()
{
    int segcarta;
    do
    {
        cout << "Muestre la Segunda Carta: "; cin >> segcarta;
    } while (segcarta < 1 || segcarta > 13);
    return segcarta;
}

int main()
{
    char corazon = 3;
    char diamante = 4;
    char trebol = 5;
    char espada = 6;
    int primcarta;
    int segcarta;

    char opc = '\0';

    Ventana();
    do
    {
        MostrarMenu();
        cout << "\tElija el palo a jugar: "; cin >> opc;
        system("cls");
        switch (toupper(opc))
        {
        case 'C':
            system("cls");
            primcarta = ValidarPrimCarta();
            segcarta = ValidarSegCarta();
            Ases(corazon, primcarta, segcarta);
            Dos(corazon, primcarta, segcarta);
            Tres(corazon, primcarta, segcarta);
            Cuatro(corazon, primcarta, segcarta);
            Cinco(corazon, primcarta, segcarta);
            Seis(corazon, primcarta, segcarta);
            Siete(corazon, primcarta, segcarta);
            Ocho(corazon, primcarta, segcarta);
            Nueve(corazon, primcarta, segcarta);
            Diez(corazon, primcarta, segcarta);
            Once(corazon, primcarta, segcarta);
            Doce(corazon, primcarta, segcarta);
            Trece(corazon, primcarta, segcarta);
            system("pause>0");
            break;
        case 'D':
            system("cls");
            primcarta = ValidarPrimCarta();
            segcarta = ValidarSegCarta();
            Ases(diamante, primcarta, segcarta);
            Dos(diamante, primcarta, segcarta);
            Tres(diamante, primcarta, segcarta);
            Cuatro(diamante, primcarta, segcarta);
            Cinco(diamante, primcarta, segcarta);
            Seis(diamante, primcarta, segcarta);
            Siete(diamante, primcarta, segcarta);
            Ocho(diamante, primcarta, segcarta);
            Nueve(diamante, primcarta, segcarta);
            Diez(diamante, primcarta, segcarta);
            Once(diamante, primcarta, segcarta);
            Doce(diamante, primcarta, segcarta);
            Trece(diamante, primcarta, segcarta);
            system("pause>0");
            break;
        case 'T':
            system("cls");
            primcarta = ValidarPrimCarta();
            segcarta = ValidarSegCarta();
            Ases(trebol, primcarta, segcarta);
            Dos(trebol, primcarta, segcarta);
            Tres(trebol, primcarta, segcarta);
            Cuatro(trebol, primcarta, segcarta);
            Cinco(trebol, primcarta, segcarta);
            Seis(trebol, primcarta, segcarta);
            Siete(trebol, primcarta, segcarta);
            Ocho(trebol, primcarta, segcarta);
            Nueve(trebol, primcarta, segcarta);
            Diez(trebol, primcarta, segcarta);
            Once(trebol, primcarta, segcarta);
            Doce(trebol, primcarta, segcarta);
            Trece(trebol, primcarta, segcarta);
            system("pause>0");
            break;
        case 'E':
            system("cls");
            primcarta = ValidarPrimCarta();
            segcarta = ValidarSegCarta();
            Ases(espada, primcarta, segcarta);
            Dos(espada, primcarta, segcarta);
            Tres(espada, primcarta, segcarta);
            Cuatro(espada, primcarta, segcarta);
            Cinco(espada, primcarta, segcarta);
            Seis(espada, primcarta, segcarta);
            Siete(espada, primcarta, segcarta);
            Ocho(espada, primcarta, segcarta);
            Nueve(espada, primcarta, segcarta);
            Diez(espada, primcarta, segcarta);
            Once(espada, primcarta, segcarta);
            Doce(espada, primcarta, segcarta);
            Trece(espada, primcarta, segcarta);
            system("pause>0");
            break;
        case '9':
            break;
        default:
            cout << "Opción no válida." << endl;
        }
        system("cls");
    } while (opc != '9');

    return 0;
}