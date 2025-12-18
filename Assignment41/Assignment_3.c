#include<stdio.h>

int Strlen(char *str)
{
    int icnt= 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}

int main()
{
    int iRet = 0;
    char arr[20];
    
    printf("Enter the string : ");
    scanf("%s", arr);

    iRet = Strlen(arr);

    printf("%d", iRet);

    return 0;
}