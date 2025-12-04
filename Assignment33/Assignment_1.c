#include<stdio.h>
#include<stdbool.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL ChkAplha(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else if(ch >= 'A' && ch <= 'Z')
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
    char cValue = '\0';
    bool bret = false;

    printf("ENter the charachter :");
    scanf("%c",&cValue);

    bret = ChkAplha(cValue);

    if(bret == true)
    {
        printf("It is a charachter ");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}