#include<stdio.h>

void Display()
{
    static char ch = 'A';
    static int icnt = 0;

    icnt = 1;

    while(icnt <= 5)
    {
        printf("%c\t", ch);
        ch++;
        icnt++;
    }
}

int main()
{
    Display();

    return 0;
}