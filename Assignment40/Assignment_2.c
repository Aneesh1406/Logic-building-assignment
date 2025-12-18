#include<stdio.h>

void Display(int ino)
{
    static int icnt = 0;

    icnt = 1;

    while(icnt <= ino)
    {
        printf("%d\t", icnt);
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