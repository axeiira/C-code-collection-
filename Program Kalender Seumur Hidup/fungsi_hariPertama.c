#include <stdio.h>
#include <conio.h>
#include <windows.h>

int hariPertama (b,c)
{
    int sum_tahun,sum_bulan,sum,i;

    int bul[12]={31,28,31,30,31,30,31,31,30,31,30,31};

        if(c%400==0 && c%100==0 || c%4==0&& c%100!=0)
            {
                bul[1]=29;
            }
        else
            {
                bul[1]=28;
            }

    sum_tahun=365*(c-1)+(c-1)/400-(c-1)/100+(c-1)/4;
    sum_bulan=0;

    for(i=0;i<b-1;i++)
    {
        sum_bulan=sum_bulan+bul[i];
    }

    sum=sum_bulan+sum_tahun;
    sum=sum%7;
    sum=sum+1;

    return sum;
}
