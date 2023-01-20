#include <stdio.h>
#include <conio.h>
#include <windows.h>

     //left 75
    //right 77
   // up 72
  // down 80

int arrow(b,c)
{
    int indicator=-1;

    while(indicator!=27)
    {
        indicator=getch();

        if(indicator==-32)
        {
            indicator=getch();
            if(indicator==75)
            {
              b=b-1;
            }
            else if(indicator==77)
            {
              b=b+1;
            }
            else if(indicator==72)
            {
              c=c+1;
            }
            else if (indicator==80)
            {
              c=c-1;
            }

        }
    }

}
