#include<stdio.h>

void Display(int ino)
{
    static int icnt = 0;

    icnt = 1;

    while(icnt <= ino)
    {
        printf("*\t");
        icnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}