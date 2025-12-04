#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    if(*str >= 1 && *str <= 9)
    {
        printf("Invalid input");
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n]s",arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}