#pragma once
#include "iostream"

using namespace std;
using namespace System;

void Uno(char forma, int dado1, int dado2)
{
    if (dado1 == 1)
    {
        Console::SetCursorPosition(5, 12); cout << forma;
    }
    if (dado2 == 1)
    {
        Console::SetCursorPosition(20, 12); cout << forma;
    }
    if (dado1 == 1 && dado2 == 1)
    {
        Console::SetCursorPosition(0, 6); cout << "¡ASES!";
        Console::SetCursorPosition(5, 12); cout << forma;
        Console::SetCursorPosition(20, 12); cout << forma;
    }
}

void Dos(char forma, int dado1, int dado2)
{
    if (dado1 == 2)
    {
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
    }
    if (dado2 == 2)
    {
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
    if (dado1 == 2 && dado2 == 2)
    {
        Console::SetCursorPosition(0, 4); cout << "¡PATOS!";
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
}

void Tres(char forma, int dado1, int dado2)
{
    if (dado1 == 3)
    {
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(5, 12); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
    }
    if (dado2 == 3)
    {
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(20, 12); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
    if (dado1 == 3 && dado2 == 3)
    {
        Console::SetCursorPosition(0, 4); cout << "¡TRENES!";
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(5, 12); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(20, 12); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
}

void Cuatro(char forma, int dado1, int dado2)
{
    if (dado1 == 4)
    {
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
    }
    if (dado2 == 4)
    {
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
    if (dado1 == 4 && dado2 == 4)
    {
        Console::SetCursorPosition(0, 4); cout << "¡CUADRAS!";
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
}

void Cinco(char forma, int dado1, int dado2)
{
    if (dado1 == 5)
    {
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(5, 12); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
    }
    if (dado2 == 5)
    {
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(20, 12); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
    if (dado1 == 5 && dado2 == 5)
    {
        Console::SetCursorPosition(0, 4); cout << "¡QUINAS!";
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(5, 12); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(20, 12); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
}

void Seis(char forma, int dado1, int dado2)
{
    if (dado1 == 6)
    {
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(1, 12); cout << forma;
        Console::SetCursorPosition(9, 12); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
    }
    if (dado2 == 6)
    {
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(16, 12); cout << forma;
        Console::SetCursorPosition(24, 12); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
    if (dado1 == 6 && dado2 == 6)
    {
        Console::SetCursorPosition(0, 4); cout << "¡CENAS!";
        Console::SetCursorPosition(1, 8); cout << forma;
        Console::SetCursorPosition(9, 8); cout << forma;
        Console::SetCursorPosition(1, 12); cout << forma;
        Console::SetCursorPosition(9, 12); cout << forma;
        Console::SetCursorPosition(1, 16); cout << forma;
        Console::SetCursorPosition(9, 16); cout << forma;
        Console::SetCursorPosition(16, 8); cout << forma;
        Console::SetCursorPosition(24, 8); cout << forma;
        Console::SetCursorPosition(16, 12); cout << forma;
        Console::SetCursorPosition(24, 12); cout << forma;
        Console::SetCursorPosition(16, 16); cout << forma;
        Console::SetCursorPosition(24, 16); cout << forma;
    }
}