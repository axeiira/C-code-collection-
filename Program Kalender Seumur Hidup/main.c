#include <stdio.h>
#include <conio.h>
#include <windows.h>

//FUNGSI
int hariBulan(int a,int b);
int hariPertama (int b,int c);
void gotoxy(int x,int y);
void header (int t,int b,int th);
void setcolor(unsigned short color);

int main()
{
    int tanggal,bulan,tahun,hari_awal,i,j,index_kalender;
    int x = 31;
    int y = 10 ;
    int xl = 46;
    int yl = 1;
    char next,restart;

    label: //CHECKPOINT RESTART

    //NAMA
    gotoxy(86,29);
    setcolor(2);
    printf("Rama Prawira Suryanto [5024221063]");

    gotoxy(xl,yl);
    setcolor(15);
    printf("Enter Date :");

    gotoxy(xl+14,yl);
    scanf("%d %d %d",&tanggal,&bulan,&tahun);

    //INVALID INPUT
    if(tanggal > 31 || tanggal < 1 || bulan > 12 || bulan < 1 || tahun < 1)
    {
        gotoxy(x+10,y);
        setcolor(9);
        printf("INVALID INPUT [PRESS r TO RESTART]");
        restart= getch();

        if(restart==114)
        {
            system("cls");
            goto label;
        }

    }

    point://CHECKPOINT NEXT

    hari_awal=hariPertama(bulan,tahun);

    index_kalender=0;

    gotoxy(x+19,y-3);
    header(tanggal,bulan,tahun);

    gotoxy(x,y);
    printf("\tMin\tSen\tSel\tRab\tKam\tJum\tSab");

    gotoxy(x,y+1);
    printf("\t___________________________________________________\n");

    //UNTUK AWAL HARI MINGGU
    if(hari_awal==7)
    {
        hari_awal=0;
        setcolor(4);
    }

    //PRINT SPACE
    gotoxy(x,y+4);
    for(j=1;j<=hari_awal;j++)
    {
        index_kalender++;
        printf("\t");
    }

    //PRINT TANGGAL
    for(i=1;i<=hariBulan(bulan,tahun);i++)
    {
        index_kalender++;
        if(i==17&&bulan==8&&tahun==1945)
        {
            setcolor(4);
        }
        if(i==10&&bulan==1&&tahun==2004)
        {
            setcolor(14);
        }
        if(i==tanggal)
        {
            setcolor(2);
        }
        printf("\t%d",i);
        setcolor(15);
        if(index_kalender%7==0)
        {
            printf("\n\t\t\t");
            setcolor(4);
        }
    }

    gotoxy(x,y+11);
    setcolor(15);
    printf("\t<<===============================================>>\n");

    //PROGRAM INPUT INSTRUCTION
    gotoxy(0,26);
    printf("(esc) to Exit");
    gotoxy(0,27);
    printf("(r) to Restart");
    gotoxy(0,28);
    printf("(LeftKey) Previous Month ; (RightKey) Next Month");
    gotoxy(0,29);
    printf("(DownKey) Previous Year ; (Upkey) Next Year");

    //GET CH
    next= getch();

    //WHEN R IS PRESSED (RESTART)
    if(next==114)
    {
        system("cls");
        goto label;
    }

    //WHEN ARROW KEYS IS PRESSED (MOVE DATE)
    if (next== -32)
    {
        next=getch();

        if(next==75)//LEFT(PREV M)
        {
            bulan=bulan-1;
            if(bulan==0)
            {
                bulan=12;
                tahun=tahun-1;
            }
        }

        if(next==77)//RIGHT(NEXT M)
        {
            bulan=bulan+1;
            if(bulan==13)
            {
                bulan=1;
                tahun=tahun+1;
            }
        }

        if(next==72)//UP(NEXT Y)
        {
            tahun=tahun+1;
        }

        if(next==80)//DOWN(PREV Y)
        {
            tahun=tahun-1;
        }

        system("cls");

        gotoxy(86,29);
        setcolor(2);
        printf("Rama Prawira Suryanto [5024221063]");

        gotoxy(xl,yl);
        setcolor(15);
        printf("Enter Date :");

        gotoxy(xl+14,yl);
        printf("%d %d %d",tanggal,bulan,tahun);

        goto point;
    }

    //WHEN ESC IS PRESSED (EXIT)
    if(next==27)
    {
        system("cls");
        printf("Exited Program");
        return 0;
    }
}
