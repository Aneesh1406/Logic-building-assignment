#include<stdio.h>

void Display(int ino)
{
    int icnt = 0;

    icnt = ino;

    while(icnt >= 1)
    {
        printf("%d\t*\t", icnt);
        icnt--;
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter the number : ");
    scanf("%d", &ivalue);

    Display(ivalue);

    return 0;
}