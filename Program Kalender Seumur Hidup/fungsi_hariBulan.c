#include <stdio.h>
#include <conio.h>
#include <windows.h>

int hariBulan(int a,int b)
{
    int hari;
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        hari=31;
    }
    else if(a==4||a==6||a==9||a==11)
    {
        hari=30;
    }
    else if(a==2)
    {
        if(b%400==0 && b%100==0 || b%4==0&&b%100!=0)
        {
            hari=29;
        }
        else
        {
            hari=28;
        }
    }
    return hari;
}
