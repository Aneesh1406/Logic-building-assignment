#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chkchar(char *str, char ch)
{
    int icnt = 0;

    for(icnt = 0; str[icnt] != '\0'; icnt++)
    {
        if(str[icnt] == ch)
        {
            return TRUE;
        }
    }
}

int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :");
    scanf("%[^'\n']s", arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);

    bRet = Chkchar(arr, cValue);

    if(bRet == true)
    {
        printf("Character found..\n");
    }
    else
    {
        printf("Character not found..\n");
    }

    return 0;
}