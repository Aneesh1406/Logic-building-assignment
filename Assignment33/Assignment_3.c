#include<stdio.h>
#include<stdbool.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL ChkAplha(int ino)
{
    if(ino >= 0 && ino <= 9)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    int iValue = 0;
    bool bret = false;

    printf("ENter the number :");
    scanf("%c",&iValue);

    bret = ChkAplha(iValue);

    if(bret == true)
    {
        printf("It is a digit ");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}