#include <stdio.h>
#include <conio.h>
#include <windows.h>

void header (int t,int b,int th)
{
    char jan[]= "Januari";
    char feb[]= "Februari";
    char mar[]= "Maret";
    char apr[]= "April";
    char may[]= "Mei";
    char jun[]= "Juni";
    char jul[]= "Juli";
    char ags[]= "Agustus";
    char sep[]= "September";
    char okt[]= "Oktober";
    char nov[]= "November";
    char des[]= "Desember";

    if(b==1)
    {
        printf("%d %s %d",t,jan,th);
    }
    else if(b==2)
    {
        printf("%d %s %d",t,feb,th);
    }
     else if(b==3)
    {
        printf("%d %s %d",t,mar,th);
    }
    else if(b==4)
    {
        printf("%d %s %d",t,apr,th);
    }
     else if(b==5)
    {
        printf("%d %s %d",t,may,th);
    }
    else if(b==6)
    {
        printf("%d %s %d",t,jun,th);
    }
    else if(b==7)
    {
        printf("%d %s %d",t,jul,th);
    }
    else if(b==8)
    {
        printf("%d %s %d",t,ags,th);
    }
    else if(b==9)
    {
        printf("%d %s %d",t,sep,th);
    }
    else if(b==10)
    {
        printf("%d %s %d",t,okt,th);
    }
    else if(b==11)
    {
        printf("%d %s %d",t,nov,th);
    }
    else if(b==12)
    {
        printf("%d %s %d",t,des,th);
    }
}
