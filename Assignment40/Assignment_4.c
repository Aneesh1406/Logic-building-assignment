#include<stdio.h>

void Display(int ino)
{
    static char ch = 'a';
    static int icnt = 0;

    icnt = 1;

    while(icnt <= ino)
    {
        printf("%c\t", ch);
        ch++;
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