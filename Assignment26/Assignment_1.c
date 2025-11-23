#include<stdio.h>

void Print(int ino)
{
    int i = 0;
    char ch = 65;
    for(i = 1; i <= ino; i++, ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("ENter value : ");
    scanf("%d", &iValue);

    Print(iValue);

    return 0;
}