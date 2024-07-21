#pragma once
#include "iostream"

using namespace std;
using namespace System;

void Ases(char carta, int primcarta, int segcarta)
{
    if (primcarta == 1)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
    }
    if (segcarta == 1)
    {
        Console::SetCursorPosition(3, 15); cout << carta;
    }
    if (primcarta == 1 && segcarta == 1)
    {
        Console::SetCursorPosition(0, 4); cout << "PAR DE ASES!\n\n";
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
    }
}

void Dos(char carta, int primcarta, int segcarta)
{
    if (primcarta == 2)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
    }
    if (segcarta == 2)
    {
        Console::SetCursorPosition(3, 15); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
    }
    if (primcarta == 2 && segcarta == 2)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
    }
}

void Tres(char carta, int primcarta, int segcarta)
{
    if (primcarta == 3)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
    }
    if (segcarta == 3)
    {
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
    }
    if (primcarta == 3 && segcarta == 3)
    {
        Console::SetCursorPosition(0, 4); cout << "TRIOS!\n\n";
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
    }
}

void Cuatro(char carta, int primcarta, int segcarta)
{
    if (primcarta == 4)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
    }
    if (segcarta == 4)
    {
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(4, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(4, 14); cout << carta;
    }
    if (primcarta == 4 && segcarta == 4)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(4, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(4, 14); cout << carta;
    }
}

void Cinco(char carta, int primcarta, int segcarta)
{
    if (primcarta == 5)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
    }
    if (segcarta == 5)
    {
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(5, 14); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
    }
    if (primcarta == 5 && segcarta == 5)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(5, 14); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
    }
}

void Seis(char carta, int primcarta, int segcarta)
{
    if (primcarta == 6)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(4, 10); cout << carta;
    }
    if (segcarta == 6)
    {
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(4, 14); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(4, 16); cout << carta;
    }
    if (primcarta == 6 && segcarta == 6)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(4, 10); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(4, 14); cout << carta;
        Console::SetCursorPosition(3, 15); cout << carta;
        Console::SetCursorPosition(4, 15); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(4, 16); cout << carta;
    }
}

void Siete(char carta, int primcarta, int segcarta)
{
    if (primcarta == 7)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;

    }
    if (segcarta == 7)
    {
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
    }
    if (primcarta == 7 && segcarta == 7)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
    }
}

void Ocho(char carta, int primcarta, int segcarta)
{
    if (primcarta == 8)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
    }
    if (segcarta == 8)
    {
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(4, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
    }
    if (primcarta == 8 && segcarta == 8)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(4, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
    }
}

void Nueve(char carta, int primcarta, int segcarta)
{
    if (primcarta == 9)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(4, 13); cout << carta;
    }
    if (segcarta == 9)
    {
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(4, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(5, 19); cout << carta;
        Console::SetCursorPosition(4, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(5, 21); cout << carta;
        Console::SetCursorPosition(4, 22); cout << carta;
    }
    if (primcarta == 9 && segcarta == 9)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(4, 13); cout << carta;
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(4, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(5, 19); cout << carta;
        Console::SetCursorPosition(4, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(5, 21); cout << carta;
        Console::SetCursorPosition(4, 22); cout << carta;
    }
}

void Diez(char carta, int primcarta, int segcarta)
{
    if (primcarta == 10)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(6, 11); cout << carta;
        Console::SetCursorPosition(8, 11); cout << carta;
        Console::SetCursorPosition(7, 12); cout << carta;
        Console::SetCursorPosition(6, 13); cout << carta;
        Console::SetCursorPosition(8, 13); cout << carta;
    }
    if (segcarta == 10)
    {
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(4, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(5, 19); cout << carta;
        Console::SetCursorPosition(6, 20); cout << carta;
        Console::SetCursorPosition(8, 20); cout << carta;
        Console::SetCursorPosition(7, 21); cout << carta;
        Console::SetCursorPosition(6, 22); cout << carta;
        Console::SetCursorPosition(8, 22); cout << carta;
    }
    if (primcarta == 10 && segcarta == 10)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(4, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(6, 11); cout << carta;
        Console::SetCursorPosition(8, 11); cout << carta;
        Console::SetCursorPosition(7, 12); cout << carta;
        Console::SetCursorPosition(6, 13); cout << carta;
        Console::SetCursorPosition(8, 13); cout << carta;
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(4, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(5, 19); cout << carta;
        Console::SetCursorPosition(6, 20); cout << carta;
        Console::SetCursorPosition(8, 20); cout << carta;
        Console::SetCursorPosition(7, 21); cout << carta;
        Console::SetCursorPosition(6, 22); cout << carta;
        Console::SetCursorPosition(8, 22); cout << carta;
    }
}

void Once(char carta, int primcarta, int segcarta)
{
    if (primcarta == 11)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(6, 8); cout << carta;
        Console::SetCursorPosition(7, 8); cout << carta;
        Console::SetCursorPosition(5, 9); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
    }
    if (segcarta == 11)
    {
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(4, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(6, 16); cout << carta;
        Console::SetCursorPosition(7, 16); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(4, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
    }
    if (primcarta == 11 && segcarta == 11)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(6, 8); cout << carta;
        Console::SetCursorPosition(7, 8); cout << carta;
        Console::SetCursorPosition(5, 9); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(3, 16); cout << carta;
        Console::SetCursorPosition(4, 16); cout << carta;
        Console::SetCursorPosition(5, 16); cout << carta;
        Console::SetCursorPosition(6, 16); cout << carta;
        Console::SetCursorPosition(7, 16); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(5, 18); cout << carta;
        Console::SetCursorPosition(4, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
    }
}

void Doce(char carta, int primcarta, int segcarta)
{
    if (primcarta == 12)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(6, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(6, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(6, 10); cout << carta;
        Console::SetCursorPosition(3, 11); cout << carta;
        Console::SetCursorPosition(6, 11); cout << carta;
        Console::SetCursorPosition(5, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(4, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(6, 12); cout << carta;
        Console::SetCursorPosition(7, 13); cout << carta;
    }
    if (segcarta == 12)
    {
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(6, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(6, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(6, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(6, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(4, 21); cout << carta;
        Console::SetCursorPosition(5, 21); cout << carta;
        Console::SetCursorPosition(6, 21); cout << carta;
        Console::SetCursorPosition(7, 22); cout << carta;
    }
    if (primcarta == 12 && segcarta == 12)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(4, 8); cout << carta;
        Console::SetCursorPosition(5, 8); cout << carta;
        Console::SetCursorPosition(6, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(6, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(6, 10); cout << carta;
        Console::SetCursorPosition(3, 11); cout << carta;
        Console::SetCursorPosition(6, 11); cout << carta;
        Console::SetCursorPosition(5, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(4, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(6, 12); cout << carta;
        Console::SetCursorPosition(7, 13); cout << carta;
        Console::SetCursorPosition(3, 17); cout << carta;
        Console::SetCursorPosition(4, 17); cout << carta;
        Console::SetCursorPosition(5, 17); cout << carta;
        Console::SetCursorPosition(6, 17); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(6, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(6, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(6, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(4, 21); cout << carta;
        Console::SetCursorPosition(5, 21); cout << carta;
        Console::SetCursorPosition(6, 21); cout << carta;
        Console::SetCursorPosition(7, 22); cout << carta;
    }
}

void Trece(char carta, int primcarta, int segcarta)
{
    if (primcarta == 13)
    {
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(7, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(6, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(3, 11); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(6, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(7, 14); cout << carta;
    }
    if (segcarta == 13)
    {
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(7, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(6, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(4, 21); cout << carta;
        Console::SetCursorPosition(3, 22); cout << carta;
        Console::SetCursorPosition(5, 22); cout << carta;
        Console::SetCursorPosition(3, 23); cout << carta;
        Console::SetCursorPosition(6, 23); cout << carta;
        Console::SetCursorPosition(3, 24); cout << carta;
        Console::SetCursorPosition(7, 24); cout << carta;
    }
    if (primcarta == 13 && segcarta == 13)
    {
        Console::SetCursorPosition(0, 4); cout << "PAR DE ASES!\n\n";
        Console::SetCursorPosition(3, 8); cout << carta;
        Console::SetCursorPosition(7, 8); cout << carta;
        Console::SetCursorPosition(3, 9); cout << carta;
        Console::SetCursorPosition(6, 9); cout << carta;
        Console::SetCursorPosition(3, 10); cout << carta;
        Console::SetCursorPosition(5, 10); cout << carta;
        Console::SetCursorPosition(3, 11); cout << carta;
        Console::SetCursorPosition(4, 11); cout << carta;
        Console::SetCursorPosition(3, 12); cout << carta;
        Console::SetCursorPosition(5, 12); cout << carta;
        Console::SetCursorPosition(3, 13); cout << carta;
        Console::SetCursorPosition(6, 13); cout << carta;
        Console::SetCursorPosition(3, 14); cout << carta;
        Console::SetCursorPosition(7, 14); cout << carta;
        Console::SetCursorPosition(3, 18); cout << carta;
        Console::SetCursorPosition(7, 18); cout << carta;
        Console::SetCursorPosition(3, 19); cout << carta;
        Console::SetCursorPosition(6, 19); cout << carta;
        Console::SetCursorPosition(3, 20); cout << carta;
        Console::SetCursorPosition(5, 20); cout << carta;
        Console::SetCursorPosition(3, 21); cout << carta;
        Console::SetCursorPosition(4, 21); cout << carta;
        Console::SetCursorPosition(3, 22); cout << carta;
        Console::SetCursorPosition(5, 22); cout << carta;
        Console::SetCursorPosition(3, 23); cout << carta;
        Console::SetCursorPosition(6, 23); cout << carta;
        Console::SetCursorPosition(3, 24); cout << carta;
        Console::SetCursorPosition(7, 24); cout << carta;
    }
}