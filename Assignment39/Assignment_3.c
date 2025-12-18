#include<stdio.h>

void Display()
{
    static int icnt = 0;

    icnt = 5;

    while(icnt >= 1)
    {
        printf("%d\t", icnt);
        icnt--;
    }
}

int main()
{

    Display();

    return 0;
}