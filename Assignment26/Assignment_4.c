#include<stdio.h>

void Print(int ino)
{
    int i = 0;

    for(i = 1; i <= ino; i++)
    {
        printf("#\t %d\t",i);
    }
}

int main()
{
    int iValue = 0;

    printf("ENter value : \n");
    scanf("%d", &iValue);

    Print(iValue);

    return 0;
}