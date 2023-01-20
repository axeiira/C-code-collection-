#include <stdio.h>
#include <conio.h>
#include <windows.h>

int move(int get)
{
    int bulan,tahun;
    if(get==114)
        {
            system("cls");
        }

    if (get== -32)
    {
        get=getch();

        if(get==75)//LEFT
            {
            bulan=bulan-1;
            if(bulan==0)
            {
                bulan=12;
                tahun=tahun-1;
            }
            }
        else if(get==77)//RIGHT
            {
            bulan=bulan+1;
            if(bulan==13)
            {
                bulan=1;
                tahun=tahun+1;
            }

            }
        else if(get==72)//UP
            {
            tahun=tahun+1;
            }
        else if(get==80)//DOWN
            {
            tahun=tahun-1;
            }
    }
    return bulan;
}
