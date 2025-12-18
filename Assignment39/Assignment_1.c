#include<stdio.h>

void Display()
{
    static int icnt = 0;

    icnt = 1;

    while(icnt <= 5)
    {
        printf("*\t");
        icnt++;
    }
}

int main()
{
    Display();

    return 0;
}