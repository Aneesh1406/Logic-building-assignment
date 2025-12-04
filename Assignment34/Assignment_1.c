#include<stdio.h>

void DisplayAscii()
{
    int icnt = 0;

    for(icnt = 0; icnt < 255; icnt++)
    {
        if(icnt < 32 || icnt == 127)
        {
            printf("%d\t%x\t%o\t\n", icnt,icnt,icnt);
        }
        else
        {
            printf("%d\t%x\t%o\t%c\t\n", icnt,icnt,icnt,icnt);
        }
    }
}

int main()
{
    DisplayAscii();

    return 0;
}