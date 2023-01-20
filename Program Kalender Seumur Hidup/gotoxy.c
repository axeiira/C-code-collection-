#include <stdio.h>
#include <conio.h>
#include <windows.h>

COORD c={0,0};

void gotoxy(int x,int y)
{
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
}
